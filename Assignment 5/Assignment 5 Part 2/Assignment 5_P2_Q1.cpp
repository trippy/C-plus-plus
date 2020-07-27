//CPSC 230 RAVI PATEL ASSIGNMENT 5 PT 2 Q1
#include <iostream>
#include <cmath>
//Write a void function declaration and function body for the following program: 
void increment(int &a);
void power3(int a, int b, double &c);
void twice(int a, int &b);

int main() { 
	int a(3) ; int  b(2) ; double c;
	increment(a); // increment a by reference 
	std::cout << "a in main " << a << std::endl;   
	power3(a,b,c); //pass c=pow(a,b) by  reference
	std::cout << "power value is " << c<<std::endl;
	twice(a,b); // double a and save in  b  by reference
  	std::cout << "Twice " << a<< " is "<< b<<std::endl;
}

void increment (int &y){
	y++; //increment a by reference
}

void power3(int a, int b, double &c){
	c = pow(a, b); //pass c=pow(a,b) by reference
}

void twice(int a, int &b){
	b = a * 2; //double a and save in b by reference
}

//SAMPLE OUTPUT:
//a in main 4
//power value is 16
//Twice 4 is 8
