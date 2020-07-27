//CPSC 230 RAVI PATEL DICE ROLLER
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
float six = 0;
int die1;
int die2;
int i = 3000000;
srand (time(NULL)); //initialized all vars
	
do { 

	die1 = (rand()%6) + 1; //roll dice and set result to die1
	die2 = (rand()%6) + 1; //roll dice and set result to die2
	
	if (die1 == 6 && die2 == 6) //if die1 and die2 are both 6
		 	six++; //add 1 to six counter
		
	--i; //go down iterations from 3000000 until 0
	}
	
		while (i>=0);
	
cout<<"Probability of times six appears on both die: "<< ((six/3000000)*100) << "%"; //display number of times six appears on both die	
cout<<"\n";	
cout<<"Number of times 6 appears on both die: "<<six;		
		
}

//SAMPLE OUTPUT:
//Probability of times six appears on both die: 2.7811%
//Number of times 6 appears on both die: 83132

