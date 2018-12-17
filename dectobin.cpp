#include "dectobin.h"

void dectobin(int data1, int *data2, int count)
{
	int *data3 = (int *)malloc(sizeof(int) * count);
	int num1 = data1;
	int remainder1 = data1;
	long *data4 = (long *)malloc(sizeof(long) * count);
	long num2 = 1;

if(data1 >= 0)
{	
	for(int i = count - 1; i >= 0; i--)
	{
		data4[i] = num2;

		num2 = num2 * 2;
	}
}

if(data1 < 0)
{
	for(int i = count - 1; i > 0; i--)
	{
		data4[i] = num2;

		num2 = num2 * 2;
	}

	data4[0] = -num2;
}

if(data1 >= 0)
{
	data3[0] = 0;
	
	for(int i = 1; i < count; i++)
	{
		data3[i] = remainder1 / data4[i];

		remainder1 = remainder1 % data4[i];
	}
}

if(data1 < 0)
{
	long temp1 = data4[0] - data1;

	remainder1 = temp1;

	data3[0] = 1;
	
	for(int i = 1; i < count; i++)
	{
		data3[i] = -(remainder1 / data4[i]);

		remainder1 = remainder1 % data4[i];
	}
}

	for(int i = 0; i < count; i++)
	{
		data2[i] = data3[i];
	}
}
