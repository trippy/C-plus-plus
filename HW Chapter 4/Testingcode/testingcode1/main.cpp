//CPSC 230 RAVI PATEL CH 4 HW Q1
//main.cpp
#include <iostream>
#include "name.h"
using namespace std;

int main()
{
	max1(125,239);	//return max value of the two numbers
	islower1('a'); //return 1 if lower case, 0 if upper case
	islower1('B'); //return 1 if lower case, 0 if upper case
	isprime1(29); //return 1 if prime number, 0 if not prime number
	isprime1(12); //return 1 if prime number, 0 if not prime number
	return 0;
}

//SAMPLE OUTPUT:
//Maximum value: 239
//1 - Character is lower case!
//0 - Character is upper case!
//1 - This is a prime number!
//0 - This is not a prime number!