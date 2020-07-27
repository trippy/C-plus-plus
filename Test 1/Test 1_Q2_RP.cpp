//CPSC 230 RAVI PATEL SUMMATION, TEST 1 Q2
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
	float y = 0.0; //declare summation value
	float x = 0.5; //declare x value
	for (int n = 0; n <= 10; n++) //for numbers zero through ten
	{
		y += (pow(-1.0,n) * pow(x,n)); //sum equals sum plus equation given
	}	
	
	double y1 = (1.0 / (1.0+x)); //function to compare to
	float percent_error = (((y1-y)/(y1)) * 100.0); //percent_error equation
	cout << "y = " << y <<endl; //display y (summation)
	cout << "y1 = "<< y1 <<endl; //display y1 (given)
	cout << "Percentage Error: " << percent_error; //display comparison by percent error
	
}


