//CPSC 230 RAVI PATEL CH5 HW Q2
#include <iostream>
#include <cmath>
using namespace std;
 
void compute_coin(int change, int& no_quarters, int& no_cents) {
no_quarters = no_cents/ change;
no_cents = no_cents - (change*no_quarters);
}
 
int main() {
	
int amount = 0, quarters = 0, dimes = 0, nickels = 0, cents = 0;
char c;

do{
	cout << "Enter an amount to evaluate (cents): " ; //get user input
	cin>>amount; //assign user input
	
	if ( amount < 1 || amount > 99 ) {
	cout << "ERROR! Can only evaluate between 1 and 99 cents. Try again.\n";
	}
	
	else {

	cout<<amount<<" cents can be given as "; //display format
 
	compute_coin(25, quarters, amount); //pass thru compute_coin
	cout << quarters<< " quarter(s)"; //display quarters

	compute_coin (10, dimes, amount); //pass thru compute_coin
	cout << " and "<< dimes<< " dime(s)"; //display dimes
	
	compute_coin (5, nickels, amount); //pass thru compute_coin
	cout << " and "<< nickels<< " nickel(s)"; //display nickels
	
	compute_coin (1, cents, amount); //pass thru compute_coin
	cout << " and "<< cents<< " cent(s)"<<endl; //display cents
 
	cout << "Would you like to do another evaluation? 'y' for yes: "; //user choice, repeat?
	cin >> c; //assign user choice

	}
	
} while((c == 'y' || c == 'Y')); //while choice is yes, do above

return (0); //catch all 
 
}

//SAMPLE OUTPUT:
//Enter an amount to evaluate (cents): 86
//86 cents can be given as 3 quarter(s) and 1 dime(s) and 0 nickel(s) and 1 cent(s)
//Would you like to do another evaluation? 'y' for yes: y
//Enter an amount to evaluate (cents): 5
//5 cents can be given as 0 quarter(s) and 0 dime(s) and 1 nickel(s) and 0 cent(s)
//Would you like to do another evaluation? 'y' for yes: y
//Enter an amount to evaluate (cents): 73
//73 cents can be given as 2 quarter(s) and 2 dime(s) and 0 nickel(s) and 3 cent(s)
//Would you like to do another evaluation? 'y' for yes: n
