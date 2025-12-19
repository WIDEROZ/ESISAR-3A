#include <stdio.h>
#include <stdint.h>

// TP 2/3 de IN330 -- exercices préparatoires
// LG et SM pour IN330, 2024

uint32_t extract_field(uint32_t w, int p, int l)
{
	// TODO : Extraire de w la série de bits à la position p de longueur l
	uint32_t w_dec = w >> p;
	return (w_dec & ((1 << l)-1));

}

// Extension de signe d'un entier de n-bits (n > 1), i, vers 32 bits
int32_t sign_extend(uint32_t i, int n)
{
	int i_dec = (32-n);
	int32_t w_dec = i << i_dec;
	return w_dec >> i_dec ;
}

int main(void)
{
	uint32_t w = 0x00b60633;
	printf("w[6..0] = %u\n", extract_field(w, 0, 7));
	printf("w[19..15] = %u\n", extract_field(w, 15, 5));

	printf("%0x\n", sign_extend(15,4));		// 0b1111				bit de poid fort à 1
	printf("%0x\n", sign_extend(15,8)); 	// 0b0000 1111			bit de poid fort à 0
	printf("%0x\n", sign_extend(-15,8));	// 0b 1111 0001			bit de poid fort à 1

}
