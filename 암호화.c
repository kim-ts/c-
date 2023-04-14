#include <openssl/aes.h>
#include <openssl/rand.h>

unsigned char key[AES_BLOCK_SIZE];
unsigned char iv[AES_BLOCK_SIZE];
RAND_bytes(key, sizeof(key));
RAND_bytes(iv, sizeof(iv));

AES_KEY aes_key;
AES_set_encrypt_key(key, 128, &aes_key);


unsigned char plaintext[] = "This is a secret message.";
unsigned int plaintext_length = strlen(plaintext);

unsigned char *ciphertext = malloc(plaintext_length + AES_BLOCK_SIZE);
int ciphertext_length = 0;
AES_cbc_encrypt(plaintext, ciphertext, plaintext_length, &aes_key, iv, AES_ENCRYPT);
ciphertext_length = plaintext_length + (AES_BLOCK_SIZE - (plaintext_length % AES_BLOCK_SIZE));