//CPSC 230 RAVI PATEL ASSIGNMENT 8 Q2
#include <iostream>
using namespace std;

struct User
{
	string firstName,lastName, birthYear;
};

int main()
{
User u; //set u as type User
  
	cout << "Please enter your first name : "; //ask user input
	cin >> u.firstName; //assign user input
  
	cout << "Please enter your last name : "; //ask user input
	cin >> u.lastName; //assign user input
  
	cout << "Please enter your birth year : "; //ask user input
	cin >> u.birthYear; //assign user input

	cout << "\nPassword: " << u.lastName << u.firstName.substr(0,2) << u.birthYear.substr(2,3); //cout password

return 0; //catch all
}