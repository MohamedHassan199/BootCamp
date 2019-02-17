/*
 * Common.h
 *
 * Created: 2/6/2019 5:44:10 PM
 *  Author: AVE-LAP-039
 */ 


#ifndef COMMON_H_
#define COMMON_H_


#include <stdint.h>
extern uint8_t SBOX[256];
#define AES_BLOCK_SIZE      16
#define AES_ROUNDS          10  // 12, 14
#define AES_ROUND_KEY_SIZE  176
extern uint8_t mul2(register uint8_t a);

void aes_decrypt_128(register uint8_t *roundkeys, register uint8_t *ciphertext,register uint8_t *plaintext);
extern void aes_key_schedule_128(register uint8_t *key, register uint8_t *roundkeys);
void aes_encrypt_128(register uint8_t *roundkeys,register uint8_t *plaintext, register uint8_t *ciphertext);


#endif /* COMMON_H_ */