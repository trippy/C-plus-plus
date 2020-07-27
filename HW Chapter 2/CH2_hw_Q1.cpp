//CPSC 230 RAVI PATEL Salary Increase Calculator
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

double previousSalary, paydue, annualsalary, monthlysalary; 
const double increase = .05; //5% pay increase retroactive for 6 months
char choice;
do {
	cout <<"Previous annual salary? : $"; //ask user input previous salary
	cin >> previousSalary;
	paydue = ((previousSalary * increase)/2); //calculate pay due
	cout<<"Amount of retroactive pay due is : $" << paydue; //display pay due
	cout << "\n";
	annualsalary = (previousSalary * (1+increase)); //calculate annual salary
	cout<<"New annual salary is : $"<<annualsalary; //display annual salary
	cout<<"\n";
	monthlysalary = (previousSalary *(1+ increase)/12); //calculate monthly salary
	cout<<"New monthly salary is : $"<<monthlysalary; //display monthly salary
	cout<<"\n";
	cout<<"Continue to run program? Repeat Calculation? Input - 'y' or 'Y' : "; //ask user to cont.
	cin>>choice;
	}

	while(choice == 'y' || choice == 'Y'); //do loop above while user wants to continue

}

//SAMPLE OUTPUT:
//Previous annual salary? : $100000
//Amount of retroactive pay due is : $2500
//New annual salary is : $105000
//New monthly salary is : $8750
//Continue to run program? Repeat Calculation? Input - 'y' or 'Y' : n