#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- Structures ---

typedef struct {
  mpz_t n;
  mpz_t e;
  mpz_t d; // Clé privée
  mpz_t p; // Facteur premier (pour CRT)
  mpz_t q; // Facteur premier (pour CRT)
  // Précalculs CRT
  mpz_t dP;   // d % (p-1)
  mpz_t dQ;   // d % (q-1)
  mpz_t qInv; // q^-1 mod p
} RSAKey;

void init_key(RSAKey *key) {
  mpz_init(key->n);
  mpz_init(key->e);
  mpz_init(key->d);
  mpz_init(key->p);
  mpz_init(key->q);
  mpz_init(key->dP);
  mpz_init(key->dQ);
  mpz_init(key->qInv);
}

void clear_key(RSAKey *key) {
  mpz_clear(key->n);
  mpz_clear(key->e);
  mpz_clear(key->d);
  mpz_clear(key->p);
  mpz_clear(key->q);
  mpz_clear(key->dP);
  mpz_clear(key->dQ);
  mpz_clear(key->qInv);
}

// --- Génération de Clés ---

void generate_keys(RSAKey *key, int bits) {
  gmp_randstate_t state;
  gmp_randinit_default(state);
  gmp_randseed_ui(state, time(NULL));

  mpz_t p_minus_1, q_minus_1, phi;
  mpz_init(p_minus_1);
  mpz_init(q_minus_1);
  mpz_init(phi);

  // 1. Générer p et q
  // Chaque nombre premier aura environ la moitié des bits totaux
  int prime_bits = bits / 2;

  // Génération de p
  mpz_urandomb(key->p, state, prime_bits);
  mpz_nextprime(key->p, key->p); // Trouve le premier nombre premier > p_aléa

  // Génération de q (différent de p)
  do {
    mpz_urandomb(key->q, state, prime_bits);
    mpz_nextprime(key->q, key->q);
  } while (mpz_cmp(key->p, key->q) == 0);

  // 2. Calculer n = p * q
  mpz_mul(key->n, key->p, key->q);

  // 3. Calculer phi(n) = (p-1)(q-1)
  mpz_sub_ui(p_minus_1, key->p, 1);
  mpz_sub_ui(q_minus_1, key->q, 1);
  mpz_mul(phi, p_minus_1, q_minus_1);

  // 4. Choisir e (65537 est standard)
  mpz_set_ui(key->e, 65537);

  // Vérifier que pgcd(e, phi) == 1
  mpz_t gcd_chk;
  mpz_init(gcd_chk);
  while (1) {
    mpz_gcd(gcd_chk, key->e, phi);
    if (mpz_cmp_ui(gcd_chk, 1) == 0)
      break;
    mpz_add_ui(key->e, key->e, 2); // Essayer le prochain impair
  }
  mpz_clear(gcd_chk);

  // 5. Calculer d = e^-1 mod phi
  mpz_invert(key->d, key->e, phi);

  // --- Précalculs CRT ---

  // dP = d mod (p-1)
  mpz_mod(key->dP, key->d, p_minus_1);

  // dQ = d mod (q-1)
  mpz_mod(key->dQ, key->d, q_minus_1);

  // qInv = q^-1 mod p
  mpz_invert(key->qInv, key->q, key->p);

  // Affichage des infos
  gmp_printf("--- Cles RSA (%d bits) ---\n", bits);
  gmp_printf("n (bits: %zu) = %Zd\n", mpz_sizeinbase(key->n, 2), key->n);
  gmp_printf("e = %Zd\n", key->e);
  // On n'affiche pas les clés privées complètes pour ne pas polluer l'écran si
  // très grand, sauf demande.

  mpz_clear(p_minus_1);
  mpz_clear(q_minus_1);
  mpz_clear(phi);
  gmp_randclear(state);
}

// --- Chiffrement ---
void rsa_encrypt(mpz_t cipher, mpz_t msg, RSAKey *key) {
  mpz_powm(cipher, msg, key->e, key->n);
}

// --- Déchiffrement Classique ---
void rsa_decrypt(mpz_t plain, mpz_t cipher, RSAKey *key) {
  mpz_powm(plain, cipher, key->d, key->n);
}

// --- Déchiffrement CRT Optimisé ---
void rsa_decrypt_crt(mpz_t plain, mpz_t cipher, RSAKey *key) {
  mpz_t m1, m2, h;
  mpz_init(m1);
  mpz_init(m2);
  mpz_init(h);

  // m1 = c^dP mod p
  mpz_powm(m1, cipher, key->dP, key->p);

  // m2 = c^dQ mod q
  mpz_powm(m2, cipher, key->dQ, key->q);

  // h = (m1 - m2) * qInv mod p
  mpz_sub(h, m1, m2);
  mpz_mul(h, h, key->qInv);
  mpz_mod(
      h, h,
      key->p); // gmp gère correctement les nombres négatifs pour le modulo ?
  // mpz_mod retourne toujours un résultat posititif si le diviseur est positif.

  // m = m2 + h * q
  mpz_mul(h, h, key->q);
  mpz_add(plain, m2, h);

  mpz_clear(m1);
  mpz_clear(m2);
  mpz_clear(h);
}

int main() {
  RSAKey key;
  init_key(&key);

  // Test avec 1024 bits (standard minimal aujourd'hui, bien plus que 512)
  // Le user a demandé 128, 256, 512. On va faire 512 pour l'exemple.
  int key_size = 512;
  generate_keys(&key, key_size);

  mpz_t msg, cipher, decrypted, decrypted_crt;
  mpz_init(msg);
  mpz_init(cipher);
  mpz_init(decrypted);
  mpz_init(decrypted_crt);

  // Message à chiffrer (un grand nombre aléatoire)
  mpz_set_str(msg, "123456789012345678901234567890123456789", 10);
  gmp_printf("\nMessage: %Zd\n", msg);

  // Chiffrement
  rsa_encrypt(cipher, msg, &key);
  gmp_printf("Chiffre: %Zd\n", cipher);

  // Mesure performance Standard
  clock_t start = clock();
  int iterations =
      1000; // On fait plusieurs itérations pour que ce soit mesurable
  for (int i = 0; i < iterations; i++) {
    rsa_decrypt(decrypted, cipher, &key);
  }
  double time_std = (double)(clock() - start) / CLOCKS_PER_SEC;
  gmp_printf("Decrypted (Std): %Zd\n", decrypted);
  printf("Temps (Std) pour %d ops: %f s\n", iterations, time_std);

  // Mesure performance CRT
  start = clock();
  for (int i = 0; i < iterations; i++) {
    rsa_decrypt_crt(decrypted_crt, cipher, &key);
  }
  double time_crt = (double)(clock() - start) / CLOCKS_PER_SEC;
  gmp_printf("Decrypted (CRT): %Zd\n", decrypted_crt);
  printf("Temps (CRT) pour %d ops: %f s\n", iterations, time_crt);

  // Verification
  if (mpz_cmp(msg, decrypted) == 0 && mpz_cmp(msg, decrypted_crt) == 0) {
    printf("\nSUCCES: Les dechiffrements sont corrects.\n");
    printf("Gain de performance CRT: %.2fx plus rapide\n", time_std / time_crt);
  } else {
    printf("\nECHEC: Erreur de dechiffrement.\n");
  }

  mpz_clear(msg);
  mpz_clear(cipher);
  mpz_clear(decrypted);
  mpz_clear(decrypted_crt);
  clear_key(&key);

  return 0;
}
