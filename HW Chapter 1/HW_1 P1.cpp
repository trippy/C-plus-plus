//Ravi Patel CPSC 230 C++ 30351
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	#define Acceleration 32 //define Acceleration @ == 32 feet per second due to gravity
	int time; //declaration of variable time of type int
	double distance; //declaration of variable distance of type double
	cout<<"Enter a time (in seconds): "; //ask for user input of time in seconds
	cin>>time; //user input is attached to time int
	distance = ((Acceleration * time * time)/2); //distance calculation applied to double distance
	cout<<"Distance traveled by an object in free fall for "<<time<<" seconds == "<<distance<<"\n"; //display of distance calculated
		
	
}