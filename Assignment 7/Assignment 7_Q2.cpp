#include <iostream>
//CPSC 230 RAVI PATEL DIFFERENCE USING ARRAY
using namespace std;

void introduction();
void newline();
void runProgram();
void display();
void difference();
void keepRunning();

//int a[10] = {0, 1, 10, 20, 30, 100, 50, 30, 80};
int diff[10];
double a[10];

int main() {
	introduction();
	newline();
	runProgram();
	newline();
	display();
	newline();
	difference();
	keepRunning();
	newline();
}

void introduction(){
	cout<<"This program will allow you to find the difference of two consecutive values in an array."<<endl;
}

void newline() {
		int n;
		for (n = 0; n < 1; n++)
			printf("\n");
}		

void runProgram(){
	for (int j = 0; j < 10; j++){
		cout<<"Enter a number for the array: ";
		cin>>a[j];
	}

}

void display(){
	cout<<"a[10]"<<endl;
	for (int i = 0; i<10; i++){
		cout<<a[i]<<endl;
	}
}

void difference(){
	cout<<"diff[10]"<<endl;
	for (int i = 0; i < 9; i++) 
	{	
		diff[i] = a[i + 1] - a[i];
		cout<<diff[i]<<endl;
	}
}

void keepRunning(){
	char ch;
	cout<<"Enter 'y' to continue the program: ";
	cin>>ch;
	
	while (ch == 'y' || ch == 'Y')
	{
		main();
	}
	exit(0);
	
}