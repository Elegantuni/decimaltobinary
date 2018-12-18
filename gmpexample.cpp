#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
#include "gmpdectobin.h"

int main(int argc, char *argv[])
{
	int number1 = -1;
	mpz_t number2;
	mpz_init(number2);
	mpz_set_si(number2, -1);
	const int maxsize = 64;

	mpz_t *buffer1 = (mpz_t *)malloc(sizeof(mpz_t) * maxsize);

	for(int i = 0; i < maxsize; i++)
	{
		mpz_init(buffer1[i]);
	}

	int total1 = number1 & (number1 - 1);
	
	gmpdectobin(number2, buffer1, maxsize);

	for(int i = 0; i < maxsize; i++)
	{
		gmp_printf("%Zd", buffer1[i]);
	}

	printf("\n");

	return 0;
}

