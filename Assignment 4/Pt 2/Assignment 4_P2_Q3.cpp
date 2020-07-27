//CPSC 230 RAVI PATEL GCD & LCD Calculator
#include <iostream>

int gcd(int,int);

using namespace std;

int main() {

int num1, num2, cf, product, LCD;

cout << "Enter a number to use in Euclidean algorithm: ";
cin >> num1;
cout << "Enter another number to use in Euclidean algorithm: ";
cin >> num2;

cf = gcd(num1, num2); //calculate common factor

if (cf) {

	product = num1 * num2; //calculate product of num1 and num2
	LCD = product / cf; //calculate lowest common denominator
	cout << "\nThe Greatest Common Divisor of " << num1 << " and " << num2 << " is: " << cf << endl;
	cout << "The Least Common Denominator of " << num1 << " and " << num2 << " is: " << LCD << endl;

	}

else

	cout << "\nPlease try different numbers.\n";

}

int gcd(int u, int v) {

return (v != 0) ? gcd(v, u % v) : u;

}

//SAMPLE OUTPUT:
//Enter a number to use in Euclidean algorithm: 2
//Enter another number to use in Euclidean algorithm: 3
//
//The Greatest Common Divisor of 2 and 3 is: 1
//The Least Common Denominator of 2 and 3 is: 6
