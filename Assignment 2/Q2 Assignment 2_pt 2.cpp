//CPSC 230 Ravi Patel
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

double temp1, temp2;
double velocity;
char n;

do {
cout <<"Desired Starting Temperature: "; //ask for user input
cin >>temp1; //assign input to temp1 (starting temperature)
cout <<"Desired Ending Temperature: "; //ask for user input
cin >>temp2; //assign input to temp2 (ending temperature)

cout<< "\n";
	
while (temp1 <= temp2) { //while the starting temp is less than or equal to the ending temp

velocity = 331.3 + 0.61 * temp1; //calculate velocity
cout << "At " << temp1 <<" degrees Celsius the velocity of sound is "<< velocity << " m/s" << endl;
temp1 += 10; //add 10 to temp1 each time the do-while loop is run

}

cout << "\nAny more temperatures to input?"; //ask user if they want to continue program
cout << "\nEnter 'y' to continue || 'n' to stop the program: ";
cin >> n; //if n is entered, stop program
cout << "\n";

} 

while (n == 'y' || n == 'Y'); // end do-whileloop unless y or Y is entered

}

//OUTPUT:
//Desired Starting Temperature: 10
//Desired Ending Temperature: 50

//At 10 degrees Celsius the velocity of sound is 337.4 m/s
//At 20 degrees Celsius the velocity of sound is 343.5 m/s
//At 30 degrees Celsius the velocity of sound is 349.6 m/s
//At 40 degrees Celsius the velocity of sound is 355.7 m/s
//At 50 degrees Celsius the velocity of sound is 361.8 m/s

//Any more temperatures to input?
//Enter 'y' to continue || 'n' to stop the program: n
