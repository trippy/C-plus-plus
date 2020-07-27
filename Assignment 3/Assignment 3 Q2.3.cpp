//CPSC 230 RAVI PATEL FIBONACCI CALCULATOR
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
int n;
	
cout<<"Generating all fibonacci values below n. Value of n? : ";
cin>>n;
	
if (n>=1 && n <= 100) {
	
int a = 0;
int b = 1;
int sum;
	
	for (int i = 0; i < n; i++)
		{
		if (a <= n)
			cout<<a<<", ";
			sum = a + b;
			a = b ;
			b = sum;
		if (a > n)
			break;
		}
		

}

else
cout<<"This calculator can only use a number between 1 & 100 to avoid overflow. Sorry!";
	
return 0;
}

//SAMPLE OUTPUT:
//Generating all fibonacci values below n. Value of n? : 55
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 