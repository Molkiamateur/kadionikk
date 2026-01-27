#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- Outils Mathématiques (repris de tp.c / tp-2.c) ---

// Multiplication 128 bits pour éviter l'overflow sur uint64_t
uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m) {
  return (uint64_t)(((unsigned __int128)a * b) % m);
}

// Exponentiation modulaire (base^exp % mod)
uint64_t power(uint64_t base, uint64_t exp, uint64_t mod) {
  uint64_t res = 1;
  base %= mod;
  while (exp > 0) {
    if (exp % 2 == 1)
      res = mul_mod(res, base, mod);
    base = mul_mod(base, base, mod);
    exp /= 2;
  }
  return res;
}

// Test de Miller-Rabin
int miller_rabin(uint64_t n, int k) {
  if (n == 2 || n == 3)
    return 1;
  if (n < 2 || n % 2 == 0)
    return 0;

  uint64_t d = n - 1;
  int r = 0;
  while (d % 2 == 0) {
    d /= 2;
    r++;
  }

  for (int i = 0; i < k; i++) {
    uint64_t a = 2 + rand() % (n - 4);
    uint64_t x = power(a, d, n);

    if (x == 1 || x == n - 1)
      continue;

    int continue_outer = 0;
    for (int j = 0; j < r - 1; j++) {
      x = mul_mod(x, x, n);
      if (x == n - 1) {
        continue_outer = 1;
        break;
      }
    }
    if (continue_outer)
      continue;

    return 0; // Composé
  }
  return 1; // Probablement premier
}

// Génère un grand nombre aléatoire sur 64 bits
uint64_t rand64() {
  uint64_t r = 0;
  for (int i = 0; i < 5; i++) {
    r = (r << 15) | (rand() & 0x7FFF);
  }
  return r;
}

uint64_t generate_prime() {
  uint64_t random_prime = 0;
  int found = 0;
  while (!found) {
    // Force le bit de poids fort pour avoir un grand nombre
    // et le bit de poids faible pour être impair
    uint64_t candidate = rand64() | (1ULL << 63) | 1;
    // Ou juste aléatoire impair :
    // uint64_t candidate = rand64() | 1;

    // Pour l'exercice, on veut peut-être des nombres plus petits pour que n
    // tienne sur 64 bits ? Si p et q font 64 bits, n fait 128 bits. Le code
    // utilise uint64_t, donc p et q doivent faire ~32 bits max pour que n
    // tienne sur 64 bits.

    // Ajustement à 31 bits pour éviter les soucis (produit < 2^62)
    candidate = (rand() & 0x7FFFFFFF) | 0x40000000; // Force 30eme bit
    if (candidate % 2 == 0)
      candidate++;

    if (miller_rabin(candidate, 10)) {
      random_prime = candidate;
      found = 1;
    }
  }
  return random_prime;
}

// --- Question 4: Euclide Étendu ---

// Algorithme d'Euclide étendu : calcule u, v tels que a*u + b*v = pgcd(a, b)
// Retourne le pgcd
// Algorithme d'Euclide étendu itératif
int64_t extended_gcd(int64_t a, int64_t b, int64_t *u, int64_t *v) {
  int64_t r0 = a, r1 = b;
  int64_t u0 = 1, u1 = 0;
  int64_t v0 = 0, v1 = 1;

  while (r1 != 0) {
    int64_t q = r0 / r1;
    int64_t rs = r0 % r1;
    r0 = r1;
    r1 = rs;

    int64_t us = u0 - q * u1;
    u0 = u1;
    u1 = us;

    int64_t vs = v0 - q * v1;
    v0 = v1;
    v1 = vs;
  }
  *u = u0;
  *v = v0;
  return r0;
}

// Inverse modulaire : trouve x tel que (a * x) % m == 1
uint64_t mod_inverse(uint64_t a, uint64_t m) {
  int64_t u, v;
  int64_t g = extended_gcd((int64_t)a, (int64_t)m, &u, &v);
  if (g != 1) {
    printf("Erreur: Pas d'inverse modulaire (pgcd = %lld)\n", (long long)g);
    return 0;
  }
  // u peut être négatif.
  int64_t res = u % (int64_t)m;
  if (res < 0)
    res += (int64_t)m;
  return (uint64_t)res;
}

// --- Question 5: Génération de clés ---

typedef struct {
  uint64_t n;
  uint64_t e;
  uint64_t d; // Privé
  uint64_t p; // Privé (pour optimisation)
  uint64_t q; // Privé (pour optimisation)
} RSAKey;

void generate_keys(RSAKey *key) {
  // 1. Choisir deux nombres premiers p et q
  // On veut n sur 64 bits max, donc p et q sur ~32 bits max.
  // On va utiliser 31 bits pour être tranquille avec les multiplications
  // signées si besoin
  key->p = generate_prime();
  do {
    key->q = generate_prime();
  } while (key->p == key->q); // assure p != q

  // 2. Calculer n = p * q
  key->n = key->p * key->q;

  // 3. Calculer phi(n) = (p-1)(q-1)
  uint64_t phi = (key->p - 1) * (key->q - 1);

  // 4. Choisir e exposant public
  // Habituellement 65537, mais il doit être premier avec phi
  key->e = 65537;
  // Petit check au cas où (très improbable que phi soit multiple de 65537)
  int64_t u, v;
  while (extended_gcd(key->e, phi, &u, &v) != 1) {
    key->e += 2; // On essaie le prochain impair
  }

  // 5. Calculer d exposant privé (inverse de e modulo phi)
  key->d = mod_inverse(key->e, phi);

  printf("Cles regenerees:\n");
  printf("p = %llu, q = %llu\n", (unsigned long long)key->p,
         (unsigned long long)key->q);
  printf("n = %llu\n", (unsigned long long)key->n);
  printf("phi = %llu\n", (unsigned long long)phi);
  printf("e = %llu\n", (unsigned long long)key->e);
  printf("d = %llu\n", (unsigned long long)key->d);

  // VERIFICATION INTERNE
  uint64_t check = mul_mod(key->e, key->d, phi);
  printf("VERIF: (e * d) %% phi = %llu\n", (unsigned long long)check);
  if (check != 1) {
    printf("CRITICAL ERROR: d is not inverse of e mod phi!\n");
  }
}

// --- Question 6: Chiffrement ---
uint64_t rsa_encrypt(uint64_t msg, uint64_t e, uint64_t n) {
  if (msg >= n) {
    printf("Erreur: Le message doit etre inferieur a n\n");
    return 0;
  }
  return power(msg, e, n);
}

// --- Question 7: Dechiffrement (Classique) ---
uint64_t rsa_decrypt(uint64_t cipher, uint64_t d, uint64_t n) {
  return power(cipher, d, n);
}

// --- Question 8 & 9: Dechiffrement Optimisé (CRT) ---
// Utilisation du Théorème des Restes Chinois
uint64_t rsa_decrypt_crt(uint64_t cipher, RSAKey *key) {
  // On précalcule (ou on les a stockés)
  uint64_t dP = key->d % (key->p - 1);
  uint64_t dQ = key->d % (key->q - 1);
  uint64_t qInv = mod_inverse(key->q, key->p);

  // m1 = c^dP mod p
  uint64_t m1 = power(cipher, dP, key->p);
  // m2 = c^dQ mod q
  uint64_t m2 = power(cipher, dQ, key->q);

  // Formule de Garner pour recombiner : m = m2 + h * q
  // h = (m1 - m2) * qInv mod p

  // Attention aux nombres négatifs dans la soustraction
  int64_t diff = (int64_t)m1 - (int64_t)m2;
  // On s'assure que c'est positif modulo p
  while (diff < 0)
    diff += key->p;

  uint64_t h = mul_mod((uint64_t)diff, qInv, key->p);
  uint64_t m =
      m2 + mul_mod(h, key->q, key->n); // attention overflow ici ? non car < n

  // Note: mul_mod n'est pas strictement nécessaire pour h * q car h < p donc
  // h*q < p*q = n. Mais m2 + h*q peut 'dépasser' uint64_t si n est très proche
  // de MAX_UINT64 ? n est < 2^64, donc m tient dans uint64_t. m2 < q, h < p,
  // h*q < p*q = n m2 + h*q < q + n, ce qui peut potentiellement dépasser n
  // légèrement ? En théorie m < n, donc ça doit tenir. On peut utiliser des
  // calculs directs.

  return m;
}

// --- Question 10 (?): Factorisation (Pollard's Rho) ---

uint64_t gcd(uint64_t a, uint64_t b) {
  while (b) {
    uint64_t t = b;
    b = a % b;
    a = t;
  }
  return a;
}

uint64_t pollard_rho(uint64_t n) {
  if (n % 2 == 0)
    return 2;

  uint64_t x = 2 + rand() % (n - 2);
  uint64_t y = x;
  uint64_t c = 1 + rand() % (n - 1);
  uint64_t d = 1;

  while (d == 1) {
    x = (mul_mod(x, x, n) + c) % n;
    y = (mul_mod(y, y, n) + c) % n;
    y = (mul_mod(y, y, n) + c) % n;

    uint64_t val = (x > y) ? (x - y) : (y - x);
    d = gcd(val, n);

    if (d == n) {
      x = 2 + rand() % (n - 2);
      y = x;
      c = 1 + rand() % (n - 1);
      d = 1;
    }
  }
  return d;
}

void factorize(uint64_t n) {
  if (n == 1)
    return;
  if (miller_rabin(n, 10)) {
    printf("%llu ", (unsigned long long)n);
    return;
  }
  uint64_t divisor = pollard_rho(n);
  factorize(divisor);
  factorize(n / divisor);
}

int main() {
  srand(time(NULL));

  // --- Test de Factorisation demande ---
  uint64_t target = 18446744073709551557ULL;
  printf("\n--- Test Factorisation ---\n");
  printf("Nombre a factoriser : %llu\n", (unsigned long long)target);

  clock_t start_fact = clock();
  printf("Facteurs : ");
  factorize(target);
  printf("\n");
  clock_t end_fact = clock();
  printf("Temps factorisation : %f s\n",
         (double)(end_fact - start_fact) / CLOCKS_PER_SEC);
  // ------------------------------------

  RSAKey key;
  generate_keys(&key);

  uint64_t message = 123456789;
  printf("\n--- Test RSA ---\n");
  printf("Message original : %llu\n", (unsigned long long)message);

  // Chiffrement
  uint64_t cipher = rsa_encrypt(message, key.e, key.n);
  printf("Message chiffre  : %llu\n", (unsigned long long)cipher);

  // Dechiffrement Classique
  clock_t start = clock();
  uint64_t decrypted = rsa_decrypt(cipher, key.d, key.n);
  clock_t end = clock();
  double time_classic = (double)(end - start) / CLOCKS_PER_SEC;

  printf("Dechiffbre (Std) : %llu (Temps: %f s)\n",
         (unsigned long long)decrypted, time_classic);

  // Dechiffrement CRT
  start = clock();
  uint64_t decrypted_crt = rsa_decrypt_crt(cipher, &key);
  end = clock();
  double time_crt = (double)(end - start) / CLOCKS_PER_SEC;

  printf("Dechiffbre (CRT) : %llu (Temps: %f s)\n",
         (unsigned long long)decrypted_crt, time_crt);

  if (decrypted == message && decrypted_crt == message) {
    printf("\nSUCCES : Les dechiffrements sont corrects.\n");
  } else {
    printf("\nECHEC : Erreur de dechiffrement.\n");
  }

  return 0;
}
