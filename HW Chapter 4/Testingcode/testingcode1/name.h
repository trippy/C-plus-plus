//CPSC 230 RAVI PATEL CH 4 HW Q1
//name.h
#include <iostream>
using namespace std;

double max1(double a, double b){
	if (a > b)
		cout<<"Maximum value: "<<a<<endl;
	else
		cout<<"Maximum value: "<<b<<endl;
	return 0;
}
bool islower1(char a){
	if (islower(a)) 
		cout<< true<<" - Character is lower case!"<<endl;
	else
		cout<< false<<" - Character is upper case!"<<endl;    
	return 0;
}
bool isprime1(int a){
	bool isPrime = true;
	int i;
	
	for(i = 2; i <= a / 2; ++i)
	{
			if(a % i == 0)
			{
					isPrime = false;
					break;
			}
	}
	if (isPrime)
			cout<< true<<" - This is a prime number!"<<endl;
	else
			cout<< false<<" - This is not a prime number!"<<endl;

	return 0;
}