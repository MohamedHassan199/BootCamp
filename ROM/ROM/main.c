/*
 *
 * Chinese Academy of Sciences
 * State Key Laboratory of Information Security
 * Institute of Information Engineering
 *
 * Copyright (C) 2016 Chinese Academy of Sciences
 *
 * LuoPeng, luopeng@iie.ac.cn
 * Updated in May 2016
 *
 */
//#include <avr/io.h>

#include "Common.h"

int main(int argc, char *argv[]) {

	register uint8_t j,i;
	
	
	


	/* 128 bit key */

	uint8_t plaintext[16] ;
	for(i=0;i<255;i+=17){
		
		plaintext[j]=i;
		j++;
	}
	uint8_t key[16];
	for(i=0;i<16;i++){
		key[i]=i;
	}
	uint8_t ciphertext[AES_BLOCK_SIZE];
	uint8_t roundkeys[AES_ROUND_KEY_SIZE];
	// key schedule
	aes_key_schedule_128(key, roundkeys);
	// encryption
	aes_encrypt_128(roundkeys, plaintext, ciphertext);

	// decryption
	aes_decrypt_128(roundkeys, ciphertext,ciphertext);

	return 0;
}