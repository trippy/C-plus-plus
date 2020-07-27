//CPSC 230 RAVI PATEL Assignment 10 Question 1 - structs/bank certificate of deposit
#include <iostream>

using namespace std;
struct CDAccount
{
	double balance;
	double interest_rate; 
	int term; //months until maturity
};
CDAccount account; //declare account as type CDAccount
double rate, interest; //declare rate, interest as double variables
void get_data(CDAccount& the_account); // get the_account.balance and
// the_account.interest_rate and the_account.term from the keyboard.

double calculate_balance (CDAccount& the_account); // calculate_balance to return the new calculated balance. 
void display(); //display the results of the program run

void get_data(CDAccount& the_account){
	cout << "What is the account balance?: $";
	cin >> the_account.balance;
	cout << "What is the interest rate of the account?: ";
	cin >> the_account.interest_rate;
	cout << "What is the account term? (How many months until CD maturity?): "; 
	cin >> the_account.term;
}
double calculate_balance (CDAccount& the_account){
	rate = account.interest_rate / 100.0; //the interest rate is the percentage rate of interest (so we divide by 100)
	interest = account.balance * rate * (account.term / 12.0); //interest is the current acc balance * interest rate * 
	//times the (terms until maturity / 12 for the whole year - 12 months in a year)
	account.balance = account.balance + interest; //new account balance is the old balance plus the interest of account
	return 0;
}
void display(){
	cout<<"When the account matures, at the end of "<<account.term<<" months, the balance will be a total of: $"<<account.balance<<endl;
	cout<<"Thank you for using Ravi's CDAccount Calculator!";
}

int main(int argc, char *argv[]) {
	get_data(account); //get data for account from user
	calculate_balance(account); //calculate using the given account data
	display();	
}

//SAMPLE OUTPUT:
//What is the account balance?: $40000
//What is the interest rate of the account?: 85
//What is the account term? (How many months until CD maturity?): 6
//When the account matures, at the end of 6 months, the balance will be a total of: $57000
//Thank you for using Ravi's CDAccount Calculator!