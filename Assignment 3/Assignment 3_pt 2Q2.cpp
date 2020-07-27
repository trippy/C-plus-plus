//CPSC 230 RAVI PATEL FOR LOOP SUMMATION
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	double sum = 0;
	double x = 0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "What is x: ";
		cin >> x;
		sum += x*x;
	}	
	cout << "Sum = " << sum;
}

//SAMPLE OUTPUT:
//What is x: 1
//What is x: -1
//What is x: 1
//What is x: -1
//What is x: 1
//What is x: -1
//Sum = 6
