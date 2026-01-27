use rand::Rng;
use std::time::Instant;

// --- Outils Mathématiques ---

// Multiplication modulaire safe (u64 * u64) % u64 via u128
fn mul_mod(a: u64, b: u64, m: u64) -> u64 {
    ((a as u128 * b as u128) % m as u128) as u64
}

// PGCD simple
fn gcd(a: u64, b: u64) -> u64 {
    let mut a = a;
    let mut b = b;
    while b != 0 {
        let t = b;
        b = a % b;
        a = t;
    }
    a
}

fn pollard_rho(n: u64) -> u64 {
    if n % 2 == 0 { return 2; }
    
    let mut rng = rand::thread_rng();
    let mut x: u64 = rng.gen_range(2..n);
    let mut y = x;
    let c: u64 = rng.gen_range(1..n);
    let mut d = 1;

    while d == 1 {
        // x = (x*x + c) % n
        let x2 = mul_mod(x, x, n);
        x = (x2 as u128 + c as u128) as u64 % n;

        // y = f(f(y))
        let y2 = mul_mod(y, y, n);
        y = (y2 as u128 + c as u128) as u64 % n;
        let y2_2 = mul_mod(y, y, n);
        y = (y2_2 as u128 + c as u128) as u64 % n;

        let val = if x > y { x - y } else { y - x };
        d = gcd(val, n);

        if d == n {
             // Restart
             x = rng.gen_range(2..n);
             y = x;
             // On peut changer c aussi si on veut être sûr
             d = 1;
        }
    }
    d
}

fn factorize(n: u64) {
    if n == 1 { return; }
    if miller_rabin(n, 10) {
        print!("{} ", n);
        return;
    }
    let divisor = pollard_rho(n);
    factorize(divisor);
    factorize(n / divisor);
}

// Exponentiation modulaire
fn power(mut base: u64, mut exp: u64, modulus: u64) -> u64 {
    let mut res = 1;
    base %= modulus;
    while exp > 0 {
        if exp % 2 == 1 {
            res = mul_mod(res, base, modulus);
        }
        base = mul_mod(base, base, modulus);
        exp /= 2;
    }
    res
}

// Test de Miller-Rabin
fn miller_rabin(n: u64, k: usize) -> bool {
    if n == 2 || n == 3 { return true; }
    if n < 2 || n % 2 == 0 { return false; }

    let mut d = n - 1;
    let mut r = 0;
    while d % 2 == 0 {
        d /= 2;
        r += 1;
    }

    let mut rng = rand::thread_rng();

    'witness_loop: for _ in 0..k {
        // Choisir un a aléatoire dans [2, n-2]
        // rng.gen_range est [start, end)
        let a = rng.gen_range(2..n - 1);
        let mut x = power(a, d, n);

        if x == 1 || x == n - 1 {
            continue;
        }

        for _ in 0..r - 1 {
            x = mul_mod(x, x, n);
            if x == n - 1 {
                continue 'witness_loop;
            }
        }
        return false;
    }
    true
}

// Euclide étendu itératif
// Retourne (pgcd, u, v) tel que a*u + b*v = pgcd
fn extended_gcd(a: i64, b: i64) -> (i64, i64, i64) {
    let (mut r0, mut r1) = (a, b);
    let (mut u0, mut u1) = (1, 0);
    let (mut v0, mut v1) = (0, 1);

    while r1 != 0 {
        let q = r0 / r1;
        let rs = r0 % r1;
        r0 = r1;
        r1 = rs;

        let us = u0 - q * u1;
        u0 = u1;
        u1 = us;

        let vs = v0 - q * v1;
        v0 = v1;
        v1 = vs;
    }
    (r0, u0, v0)
}

// Inverse modulaire
fn mod_inverse(a: u64, m: u64) -> Option<u64> {
    let (g, u, _) = extended_gcd(a as i64, m as i64);
    if g != 1 {
        return None;
    }
    // u peut être négatif, on le ramène dans [0, m-1]
    let m_i64 = m as i64;
    let res = u % m_i64;
    let res = if res < 0 { res + m_i64 } else { res };
    Some(res as u64)
}

// --- RSA ---

#[derive(Debug)]
struct RSAKey {
    n: u64,
    e: u64,
    d: u64,
    p: u64, // Privé (pour CRT)
    q: u64, // Privé (pour CRT)
}

fn generate_prime() -> u64 {
    let mut rng = rand::thread_rng();
    loop {
        // On veut p et q sur ~31 bits pour que n tienne dans 64 bits
        // Bit 30 forcé (0x4000...) pour assurer la taille
        let mask = 0x40000000; 
        // 0x7FFFFFFF est le masque pour garder 31 bits
        let rand_part: u64 = rng.gen::<u64>() & 0x7FFFFFFF;
        let mut candidate = rand_part | mask;
        
        // Impair
        if candidate % 2 == 0 { candidate += 1; }

        if miller_rabin(candidate, 10) {
            return candidate;
        }
    }
}

fn generate_keys() -> RSAKey {
    let p = generate_prime();
    let mut q;
    loop {
        q = generate_prime();
        if p != q { break; }
    }

    let n = p * q;
    let phi = (p - 1) * (q - 1);
    
    let mut e = 65537;
    // Vérification pgcd(e, phi) == 1
    loop {
        let (g, _, _) = extended_gcd(e as i64, phi as i64);
        if g == 1 { break; }
        e += 2;
    }

    let d = mod_inverse(e, phi).expect("Pas d'inverse modulaire trouvé !");
    
    // Verification interne
    let check = mul_mod(e, d, phi);
    if check != 1 {
        panic!("FATAL: (e * d) % phi != 1");
    }

    RSAKey { n, e, d, p, q }
}

fn rsa_encrypt(msg: u64, key: &RSAKey) -> u64 {
    if msg >= key.n {
        panic!("Message trop grand pour le module n");
    }
    power(msg, key.e, key.n)
}

fn rsa_decrypt(cipher: u64, key: &RSAKey) -> u64 {
    power(cipher, key.d, key.n)
}

fn rsa_decrypt_crt(cipher: u64, key: &RSAKey) -> u64 {
    let dp = key.d % (key.p - 1);
    let dq = key.d % (key.q - 1);
    let q_inv = mod_inverse(key.q, key.p).expect("q non inversible mod p");

    let m1 = power(cipher, dp, key.p);
    let m2 = power(cipher, dq, key.q);

    // Formule de Garner : h = (m1 - m2) * qInv mod p
    let m1_i64 = m1 as i64;
    let m2_i64 = m2 as i64;
    let p_i64 = key.p as i64;
    
    let mut diff = m1_i64 - m2_i64;
    while diff < 0 { diff += p_i64; }
    
    let h = mul_mod(diff as u64, q_inv, key.p);
    
    // m = m2 + h * q
    m2 + h * key.q
}

fn main() {
    println!("Génération des clés RSA (version Rust avec crate 'rand')...");
    
    // --- Test de Factorisation demande ---
    let target = 18446744073709551557u64;
    println!("\n--- Test Factorisation ---");
    println!("Nombre a factoriser : {}", target);
    
    let start_fact = Instant::now();
    print!("Facteurs : ");
    // Flush stdout to ensure print! is seen before computation if it hangs
    use std::io::{self, Write};
    io::stdout().flush().unwrap();
    
    factorize(target);
    println!();
    let duration_fact = start_fact.elapsed();
    println!("Temps factorisation : {:?}", duration_fact);
    // ------------------------------------

    let key = generate_keys();
    
    println!("--- Cles RSA ---");
    println!("p = {}", key.p);
    println!("q = {}", key.q);
    println!("n = {}", key.n);
    println!("e = {}", key.e);
    println!("d = {}", key.d);

    let message = 123456789;
    println!("\nMessage original : {}", message);

    let cipher = rsa_encrypt(message, &key);
    println!("Chiffre : {}", cipher);

    // Déchiffrement Standard
    let start = Instant::now();
    let dec_std = rsa_decrypt(cipher, &key);
    let duration_std = start.elapsed();
    println!("Dechiffre (Std) : {} ({:?})", dec_std, duration_std);

    // Déchiffrement CRT
    let start = Instant::now();
    let dec_crt = rsa_decrypt_crt(cipher, &key);
    let duration_crt = start.elapsed();
    println!("Dechiffre (CRT) : {} ({:?})", dec_crt, duration_crt);

    if dec_std == message && dec_crt == message {
        println!("\nSUCCES : Tout fonctionne !");
    } else {
        println!("\nECHEC : Erreur de dechiffrement");
    }
}
