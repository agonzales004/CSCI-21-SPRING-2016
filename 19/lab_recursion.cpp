/*
 * Name        : lab_recursion.cpp
 * Author      : Anthony Gonzales
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
void decToBin(int num)
{
	if (num > 1) //note this makes the base case num = 0
	{
		decToBin(num/2); //recursive call
	}

	cout<<(num%2); //outputs in correct order
}

unsigned int binToDec(int num)
{
	if (num == 1 || num == 0)
	{
		return num;
	}
	else
	{
		return num % 10 + binToDec(num/10) * 2;
	}
}

int main()
{
	int dec = binToDec(11011);
	cout << dec;
}
