#include <openssl/bn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// --- Structures ---

typedef struct {
  BIGNUM *n;
  BIGNUM *e;
  BIGNUM *d; // Clé privée
  BIGNUM *p; // Facteur premier (pour CRT)
  BIGNUM *q; // Facteur premier (pour CRT)
  // Précalculs CRT
  BIGNUM *dP;   // d % (p-1)
  BIGNUM *dQ;   // d % (q-1)
  BIGNUM *qInv; // q^-1 mod p
} RSAKey;

void init_key(RSAKey *key) {
  key->n = BN_new();
  key->e = BN_new();
  key->d = BN_new();
  key->p = BN_new();
  key->q = BN_new();
  key->dP = BN_new();
  key->dQ = BN_new();
  key->qInv = BN_new();
}

void clear_key(RSAKey *key) {
  BN_free(key->n);
  BN_free(key->e);
  BN_free(key->d);
  BN_free(key->p);
  BN_free(key->q);
  BN_free(key->dP);
  BN_free(key->dQ);
  BN_free(key->qInv);
}

// --- Génération de Clés ---

void generate_keys(RSAKey *key, int bits) {
  BN_CTX *ctx = BN_CTX_new();
  BIGNUM *p_minus_1 = BN_new();
  BIGNUM *q_minus_1 = BN_new();
  BIGNUM *phi = BN_new();
  BIGNUM *gcd_chk = BN_new();
  BIGNUM *one = BN_new();
  BN_set_word(one, 1);

  // 1. Générer e (on le fixe souvent avant pour s'assurer qu'il est bon, ou on
  // le génère après) Ici on fixe e = 65537
  BN_set_word(key->e, 65537);

  // 2. Générer p et q
  // Chaque nombre premier aura environ la moitié des bits totaux
  // On doit s'assurer que (p-1) est premier avec e, sinon d n'existe pas.
  // OpenSSL BN_generate_prime_ex permet de le faire, mais ici on va faire
  // simple.

  int prime_bits = bits / 2;
  do {
    BN_generate_prime_ex(key->p, prime_bits, 0, NULL, NULL, NULL);
    // Check gcd(p-1, e) == 1
    BN_sub(p_minus_1, key->p, one);
    BN_gcd(gcd_chk, p_minus_1, key->e, ctx);
  } while (!BN_is_one(gcd_chk));

  do {
    BN_generate_prime_ex(key->q, prime_bits, 0, NULL, NULL, NULL);
    // Check p != q
    if (BN_cmp(key->p, key->q) == 0)
      continue;

    // Check gcd(q-1, e) == 1
    BN_sub(q_minus_1, key->q, one);
    BN_gcd(gcd_chk, q_minus_1, key->e, ctx);
  } while (!BN_is_one(gcd_chk));

  // 3. Calculer n = p * q
  BN_mul(key->n, key->p, key->q, ctx);

  // 4. Calculer phi(n) = (p-1)(q-1)
  BN_mul(phi, p_minus_1, q_minus_1, ctx);

  // 5. Calculer d = e^-1 mod phi
  BN_mod_inverse(key->d, key->e, phi, ctx);

  // --- Précalculs CRT ---

  // dP = d mod (p-1)
  BN_mod(key->dP, key->d, p_minus_1, ctx);

  // dQ = d mod (q-1)
  BN_mod(key->dQ, key->d, q_minus_1, ctx);

  // qInv = q^-1 mod p
  BN_mod_inverse(key->qInv, key->q, key->p, ctx);

  printf("--- Cles RSA (%d bits) ---\n", bits);
  char *n_str = BN_bn2dec(key->n);
  printf("n = %s\n", n_str);
  OPENSSL_free(n_str);

  BN_free(p_minus_1);
  BN_free(q_minus_1);
  BN_free(phi);
  BN_free(gcd_chk);
  BN_free(one);
  BN_CTX_free(ctx);
}

// --- Chiffrement ---
void rsa_encrypt(BIGNUM *cipher, BIGNUM *msg, RSAKey *key, BN_CTX *ctx) {
  BN_mod_exp(cipher, msg, key->e, key->n, ctx);
}

// --- Déchiffrement Classique ---
void rsa_decrypt(BIGNUM *plain, BIGNUM *cipher, RSAKey *key, BN_CTX *ctx) {
  BN_mod_exp(plain, cipher, key->d, key->n, ctx);
}

// --- Déchiffrement CRT Optimisé ---
void rsa_decrypt_crt(BIGNUM *plain, BIGNUM *cipher, RSAKey *key, BN_CTX *ctx) {
  BIGNUM *m1 = BN_new();
  BIGNUM *m2 = BN_new();
  BIGNUM *h = BN_new();

  // m1 = c^dP mod p
  BN_mod_exp(m1, cipher, key->dP, key->p, ctx);

  // m2 = c^dQ mod q
  BN_mod_exp(m2, cipher, key->dQ, key->q, ctx);

  // h = (m1 - m2) * qInv mod p
  // h = (m1 - m2)
  BN_sub(h, m1, m2);
  // Si h < 0, on ajoute p
  if (BN_is_negative(h)) {
    BN_add(h, h, key->p);
  }

  BN_mod_mul(h, h, key->qInv, key->p, ctx);

  // m = m2 + h * q
  BN_mul(h, h, key->q, ctx);
  BN_add(plain, m2, h);

  BN_free(m1);
  BN_free(m2);
  BN_free(h);
}

int main() {
  RSAKey key;
  init_key(&key);
  BN_CTX *ctx = BN_CTX_new();

  // 512 bits pour comparaison
  int key_size = 512;
  generate_keys(&key, key_size);

  BIGNUM *msg = BN_new();
  BIGNUM *cipher = BN_new();
  BIGNUM *decrypted = BN_new();
  BIGNUM *decrypted_crt = BN_new();

  // Message à chiffrer
  BN_set_word(msg, 123456789);
  // On peut mettre un plus grand nombre
  // BN_dec2bn(&msg, "123456789012345678901234567890");

  char *msg_str = BN_bn2dec(msg);
  printf("\nMessage: %s\n", msg_str);
  OPENSSL_free(msg_str);

  // Chiffrement
  rsa_encrypt(cipher, msg, &key, ctx);
  char *cipher_str = BN_bn2dec(cipher);
  printf("Chiffre: %s\n", cipher_str);
  OPENSSL_free(cipher_str);

  // Mesure performance Standard
  clock_t start = clock();
  int iterations = 1000;
  for (int i = 0; i < iterations; i++) {
    rsa_decrypt(decrypted, cipher, &key, ctx);
  }
  double time_std = (double)(clock() - start) / CLOCKS_PER_SEC;
  char *dec_str = BN_bn2dec(decrypted);
  printf("Decrypted (Std): %s\n", dec_str);
  OPENSSL_free(dec_str);
  printf("Temps (Std) pour %d ops: %f s\n", iterations, time_std);

  // Mesure performance CRT
  start = clock();
  for (int i = 0; i < iterations; i++) {
    rsa_decrypt_crt(decrypted_crt, cipher, &key, ctx);
  }
  double time_crt = (double)(clock() - start) / CLOCKS_PER_SEC;
  dec_str = BN_bn2dec(decrypted_crt);
  printf("Decrypted (CRT): %s\n", dec_str);
  OPENSSL_free(dec_str);
  printf("Temps (CRT) pour %d ops: %f s\n", iterations, time_crt);

  // Verification
  if (BN_cmp(msg, decrypted) == 0 && BN_cmp(msg, decrypted_crt) == 0) {
    printf("\nSUCCES: Les dechiffrements sont corrects.\n");
    printf("Gain de performance CRT: %.2fx plus rapide\n", time_std / time_crt);
  } else {
    printf("\nECHEC: Erreur de dechiffrement.\n");
  }

  BN_free(msg);
  BN_free(cipher);
  BN_free(decrypted);
  BN_free(decrypted_crt);
  BN_CTX_free(ctx);
  clear_key(&key);

  return 0;
}
