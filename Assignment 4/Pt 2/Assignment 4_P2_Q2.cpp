//CPSC 230 RAVI PATEL DISTANCE CALCULATOR
#include <iostream>

using namespace std;
double getDistance() {
	
	double x1, x2, y1, y2; //declare vars
	double distance; //declare vars
	
	cout<<"What is x1: "; //ask user input
	cin>>x1; //assign user input
	cout<<"What is x2: ";
	cin>>x2;
	cout<<"What is y1: ";
	cin>>y1;
	cout<<"What is y2: ";
	cin>>y2;
	
	distance = sqrt(((pow(x2-x1),2)) - (pow((y2-y1),2))); //calculate distance
	
	return distance; //display distance
	
}