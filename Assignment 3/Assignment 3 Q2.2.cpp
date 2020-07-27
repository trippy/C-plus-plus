//CPSC 230 RAVI PATEL ODD NUM CALCULATOR
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int nums[10];
	int count = 10;
	float number;
	float sum = 0;
	float avg = 0;
	int oddcount = 0;
	
	for (int i = 0; i < count; i++)
	{
		cout <<"Enter a number: ";
		cin >> number;
		nums[i] = number;
	}
	
	for (int i = 0; i < count; i++){
		if (nums[i]%2 != 0)
			sum += nums[i];
		if (nums[i]%2 != 0)
		    oddcount++;
		avg = sum / oddcount;
		//cout << nums[i];
	}
		cout << "\n";
		cout << "Sum of all odd numbers: " << sum;
		cout << "\n";
		cout << "Average of all odd numbers: " << avg;
}

//SAMPLE OUTPUT:
//Enter a number: 1
//Enter a number: 2
//Enter a number: 3
//Enter a number: 4
//Enter a number: 5
//Enter a number: 6
//Enter a number: 7
//Enter a number: 8
//Enter a number: 9
//Enter a number: 10
//Sum of all odd numbers: 25
//Average of all odd numbers: 5