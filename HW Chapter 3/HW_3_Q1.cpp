//CPSC 230 RAVI PATEL CH 3 HW Q1
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {

int n;
double result = 0.0, pi;
char c;

do{

	cout << "Enter a number: ";
	cin >> n;
	cout << "\n";
	
	pi = 0.0;
	result = 0.0;
	
	if (n > 0){
		for (int i = 0; i <= n; i++){
			
			result = result + pow(-1, i) / (2 * i + 1); //calculate pi
			
		 }
		
			pi = result * 4; //calculate pi
			cout << "PI @ number n = " << pi;
			cout << "\n";

			
	}

	else { //if n is negative

		cout << "Not a valid number.";
		cout << "\n";

	}

			cout << "Repeat calculations for n? 'y' for yes: ";
			cin >> c;

 } while (c == 'y' || c == 'Y');

 cout << "Thank you for using pi calculator!";


}

//SAMPLE OUTPUT:
//Enter a number: 12
//
//PI @ number n = 3.2184
//Repeat calculations for n? 'y' for yes: n
//Thank you for using pi calculator!

