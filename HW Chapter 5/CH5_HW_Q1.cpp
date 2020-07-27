//CPSC 230 RAVI PATEL FT TO M CONVERTER CH 5 HW Q1
#include <iostream>
using namespace std;

void input(double &ft, double &in, double &meters, double &cm); //declare input function
double change(double &ft, double &in, double &meters, double &cm); //declare conversion function 
void output(double ft, double in, double meters, double cm); //declare output function

int main() //beginning of main program
{
	double ft, in, meters, cm; //assign values as double
	char c; //assign choice value as char

	do { //do this 
			input(ft, in, meters, cm); //input function
			change(ft, in, meters, cm); //conversion function
			cm = in * 2.54; //added cm conversion
			output(ft, in, meters, cm); //output function
			
			cout<<"Would you like to do more calculations? 'y' for yes: ";
			cin>>c;

		} while(c == 'y' || c == 'Y'); //while the user wants to repeat calculations

	return 0; //catch all
}

void input(double &ft, double &in, double &meters, double &cm) //input function using reference
	{ 
	cout << "How many feet? : "; //ask user input
	cin >> ft; //assign user input
	cout <<"How many inches? : "; //ask user input
	cin >> in; //assign user input
	}
double change(double &ft, double &in, double &meters , double &cm) //conversion function using reference
	{
	meters = ft * 0.3048; //.3048 meters in one foot, calculation here
	return meters; //return calculation
	}
void output(double ft, double in, double meters, double cm) //output function to display
	{
	cout <<ft << " ft " << "and " << in << " in is equivalent to " <<meters<< " meters " << "and " << cm << " cm\n";
	}
	
//SAMPLE DISPLAY OUTPUT:
//How many feet? : 5
//How many inches? : 12
//5 ft and 12 in is equivalent to 1.524 meters and 30.48 cm
//Would you like to do more calculations? 'y' for yes: y
//How many feet? : 6
//How many inches? : 4
//6 ft and 4 in is equivalent to 1.8288 meters and 10.16 cm
//Would you like to do more calculations? 'y' for yes: n
