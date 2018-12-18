#include "gmpdectobin.h"

void gmpdectobin(mpz_t data1, mpz_t *data2, int count)
{
	mpz_t *data3 = (mpz_t *)malloc(sizeof(mpz_t) * count);
	mpz_t num1;
	mpz_init(num1);
	mpz_set(num1, data1);
	mpz_t remainder1;
	mpz_init(remainder1);
	mpz_set(remainder1, data1);
	mpz_t *data4 = (mpz_t *)malloc(sizeof(mpz_t) * count);
	mpz_t num2;
	mpz_init(num2);
	mpz_set_ui(num2, 1);

	for(int i = 0; i < count; i++)
	{
		mpz_init(data3[i]);
		mpz_init(data4[i]);
	}

if(mpz_cmp_si(data1, 0) >= 0)
{
	for(int i = count - 1; i >= 0; i--)
	{
		mpz_set(data4[i], num2);

		mpz_mul_ui(num2, num2, 2);
	}
}

if(mpz_cmp_si(data1, 0) < 0)
{
	for(int i = count - 1; i > 0; i--)
	{
		mpz_set(data4[i], num2);

		mpz_mul_ui(num2, num2, 2);
	}

	mpz_mul_si(num2, num2, -1);

	mpz_set(data4[0], num2);
}

if(mpz_cmp_si(data1, 0) >= 0)
{
	mpz_set_ui(data3[0], 0);

	for(int i = 1; i < count; i++)
	{
		mpz_fdiv_q(data3[i], remainder1, data4[i]);

		mpz_abs(data3[i], data3[i]);
		
		mpz_mod(remainder1, remainder1, data4[i]);
	}
}

if(mpz_cmp_si(data1, 0) < 0)
{
	mpz_set(remainder1, num1);

	mpz_set_ui(data3[0], 1);

	for(int i = 1; i < count; i++)
	{
		mpz_fdiv_q(data3[i], remainder1, data4[i]);

		mpz_abs(data3[i], data3[i]);
		
		mpz_mod(remainder1, remainder1, data4[i]);
	}
}

	for(int i = 0; i < count; i++)
	{
		mpz_set(data2[i], data3[i]);
	}
}

