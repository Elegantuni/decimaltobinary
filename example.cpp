#include <iostream>
#include "dectobin.h"
#include <unistd.h>

using namespace std;

void printdec(int *data1, int data2);

int main(int argc, char *argv[])
{
	int number1 = 1;
	int number2 = 6;
	int result1;
	
	const int thedatasize = 8;
	int buffer1[thedatasize];
	int buffer2[thedatasize];
	int buffer3[thedatasize];
	
	dectobin(number1, buffer1, thedatasize);
	dectobin(number2, buffer2, thedatasize);

	cout << number1 << " in binary is ";

	printdec(buffer1, thedatasize);
	
	cout << endl;

	cout << number2 << " in binary is ";

	printdec(buffer2, thedatasize);

	result1 = number1 | number2;

	cout << endl;
	
	cout << number1 << " or " << number2 << " is " << result1 << endl;

	cout << result1 << " in binary is ";

	dectobin(result1, buffer3, thedatasize);

	printdec(buffer3, thedatasize);
	
	cout << endl;

	return 0;
}

void printdec(int *data1, int data2)
{
	for(int i = 0; i < data2; i++)
	{
		cout << data1[i];
	}
}

