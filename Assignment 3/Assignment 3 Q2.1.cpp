//CPSC 230 Ravi Patel CALCULATOR
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
	int x,y;
	char z;
	cout << "Enter the first number in your operation: ";
	cin >> x;
	cout << "Enter the second number in your operation: ";
	cin >> y;
	cout << "\n";
	cout << "Which operation would you like to perform?" <<"\n"<< endl;
	cout << "Enter function (+, -, *, /, 'p' for power, 'r' for root): ";
	cin >> z;
	switch(z) {
	case '+' : cout << "The answer is: " << x + y; break;
	case '-' : cout << "The answer is: " << x - y; break;
	case '*' : cout << "The answer is: " << x * y; break;
	case '/' : cout << "The answer is: " << x / y; break;
	case 'p' : cout << "The answer is: " << pow(x, y); break;
	case 'r' : cout << "The answer is: " << pow(x, 1.0/y); break;
	default : cout << "Invalid Operation";
		break;
	}
	return 0;
}

//SAMPLE OUTPUT:
//Enter the first number in your operation: 5
//Enter the second number in your operation: 2
//
//Which operation would you like to perform?
//
//Enter function (+, -, *, /, 'p' for power, 'r' for root): p
//The answer is: 25