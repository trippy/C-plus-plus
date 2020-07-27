//CPSC 230 RAVI PATEL INTEREST CALCULATOR
//Leaving extra code in program for future reference, ignore commented lines
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) {
	
float principal = 20000, rate = 1, t, amount, rates, interest, semi_amount, semi_interest;
char c;
	
do{	   
//	cout << "What is the Principal Amount ($): ";
//	cin >> principal;
//	cout << "What is the Interest Rate (%): ";
//	cin >> rate;
	cout << "Interest after how many years? : "; //ask user input
	cin >> t; //assign user input
	rates = rate/100; //assign rate to a percentage
	amount = principal * pow(1.0 + rates / t,t); //calculate interest
	semi_amount = principal * pow(1.0 + (rates/2) / t,t); //calculate semi-annual interest
	interest = amount - principal; //calculate interest
	semi_interest = semi_amount - principal; //calculate semi-annual interest
//	cout<<"\nInterest Rate:        "<<rate<<"%";
//	cout<<"\nYears Compounded:     "<<t<<" years";
//	cout<<"\nPrincipal Amount:     $"<<principal;
	cout<<"\nAnnual Interest:      $"<<interest;
	cout<<"\nSemi-Annual Interest: $"<<semi_interest;
cin.get();
cout << "\nContinue using interest calculator? 'y' for yes: ";
cin >> c;
} while (c == 'y' || c == 'Y');
return 0;	
}

//SAMPLE OUTPUT:
//Interest after how many years? : 5
//
//Annual Interest:      $200.801
//Semi-Annual Interest: $100.199
//Continue using interest calculator? 'y' for yes: y
//Interest after how many years? : 6
//
//Annual Interest:      $200.836
//Semi-Annual Interest: $100.209
//Continue using interest calculator? 'y' for yes: y
//Interest after how many years? : 7
//
//Annual Interest:      $200.859
//Semi-Annual Interest: $100.215
//Continue using interest calculator? 'y' for yes: y
//Interest after how many years? : 8
//
//Annual Interest:      $200.877
//Semi-Annual Interest: $100.219
//Continue using interest calculator? 'y' for yes: y
//Interest after how many years? : 9
//
//Annual Interest:      $200.891
//Semi-Annual Interest: $100.223
//Continue using interest calculator? 'y' for yes: y
//Interest after how many years? : 10
//
//Annual Interest:      $200.902
//Semi-Annual Interest: $100.225
//Continue using interest calculator? 'y' for yes: n