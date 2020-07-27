//CPSC 230 RAVI PATEL BMR CALCULATOR
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
char gender; //declare char gender 
char choice; //declare char choice

do {
	cout<<"Gender (M or F): "; //ask user input 
	cin>>gender; //assign input to gender

	switch(gender) //using switch assign gender to catch invalid input
		{
		case 'M':
		break;
	
		case 'F':
		break;
	
		default:
		cout<<"Unidentified Input. Please Enter Gender (M or F): ";
		cin>>gender;
		}
	  
int Weight,Height,Age; //declare ints for calculations
double bmr; //declare BMR as a double for calculations
	
	cout<<"Weight (in pounds): "; //ask user input 
	cin>>Weight; //assign user input
	cout<<"Height (in inches): "; //ask user input
	cin>>Height; //assign user input
	cout<<"Age (in years): "; //ask user input
	cin>>Age; //assign user input
	//bmr calculations for male and female
	if (gender == 'M') //if gender is Male
	{
	bmr = 66 + (6.3 * Weight) + (12.9 * Height) - (6.8 * Age); //calc BMR
	cout<<"The man must eat " << (bmr/100) << " candy bars in one day to maintain their weight." <<endl; //BMR per 100 cal
	}
	else if (gender == 'F') //if gender is Female
	{
	bmr = 655 + (4.3 * Weight) + (4.7 * Height) - (4.7 * Age); //calc BMR
	cout<<"The woman must eat "<<(bmr/100)<< " candy bars in one day to maintain their weight."<<endl; //BMR per 100 cal
	}

	cout<< "Would you like to continue the program? Input 'y' or 'Y': "; //ask user input
	cin >> choice; //assign user input
	  
	}
	
	while(choice == 'y'|| choice == 'Y'); //while choice is to continue

	cout<<"\n";
	cout<<"\n";

	return 0;
}

//SAMPLE OUTPUT:
//Gender (M or F): M
//Weight (in pounds): 130
//Height (in inches): 67
//Age (in years): 22
//The man must eat 15.997 candy bars in one day to maintain their weight.
//Would you like to continue the program? Input 'y' or 'Y': n