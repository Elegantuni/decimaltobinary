#include <iostream>
#include "dectobin.h"

using namespace std;

int main(int argc, char *argv[])
{
	int buffer1[5];

	dectobin(-2, buffer1, 5);

	for(int i = 0; i < 5; i++)
	{
		cout << buffer1[i];
	}

	cout << endl;

	return 0;
}

