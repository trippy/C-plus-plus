//CPSC 230 RAVI PATEL find_Kin_energy equation
#include <iostream>

using namespace std;
double mass, velocity;

double find_Kin_energy() {
	   
		double mass, velocity; //create variables mass, velocity of type double

		cout << "Enter the mass of the object: "; //ask user input
		cin >> mass; //assign user input
		cout << "Enter the velocity of the object: "; //ask user input
		cin >> velocity; //assign user input

		return (1.0 / 2.0) * (mass * (velocity * velocity)); //kin_Energy equation
	
	}
