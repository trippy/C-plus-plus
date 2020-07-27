//CPSC 230 Ravi Patel
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
double n; 
	cout<<"What is n? (number to find sqrt of): ";
	cin>>n;
	cout<<"\n";
double guess = n / 2; // calc guess for n 
double r = n / guess; // calc r for n 

while(guess*guess < 0.99*n || guess*guess > 1.01*n) { //guess * guess == sqrt n in theory, we use 0.99 and 1.01 to check if guess * guess is close enough to sqrt n, because it may not be exactly the same (due to continuous decimals)
	guess = (guess + r) / 2; //run the while loop again, adding guess + r & dividing by 2
	r = n / guess;
	
	} // end while loop
	
	cout << "Babylonian square root guess = "<< guess; //display guess, proven that it is corrected enough at this point 
	
}

//SAMPLE OUTPUT:
//What is n? (number to find sqrt of): 16

//Babylonian square root guess = 4.00122