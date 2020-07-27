//CPSC 230 RAVI PATEL Assignment 10 Question 2
#include <iostream>
using namespace std;

class Test
{
	private:
		int data1;
		float data2;

	public:
		int data3;	 
		void insertIntegerData(int d) {
			data1 = d;
			cout << "Number: " << data1;
		}void insertIntegerData_2(int e) {
			data2 = e;
			cout << "\nNumber: " << data2;
		}void insertIntegerData_3(int f) {
			data3 = f;
			cout << "\nNumber: " << data3;
		}
		float insertFloatData() {
			cout << "\nEnter data: ";
			cin >> data2;
			return data2;
		}
};

 int main()
 {
	Test o1, o2;
	float secondDataOfObject2;

	o1.insertIntegerData(12); //access data1 using dot operator
	o1.insertIntegerData_2(13); //access data2 using dot operator
	o1.insertIntegerData_3(14); //access data3 using dot operator
	secondDataOfObject2 = o2.insertFloatData();
	
	cout << "You entered " << secondDataOfObject2;
	return 0;
 }

//SAMPLE OUTPUT:
//Number: 12
//Number: 13
//Number: 14
//Enter data: 23.2
//You entered 23.2