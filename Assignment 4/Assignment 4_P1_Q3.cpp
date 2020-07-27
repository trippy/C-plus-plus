//CPSC 230 RAVI PATEL CH4 Assignment P1 Q3
#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char *argv[]) { 
	cout << static_cast<double> (11)/2; //cast as double, result 5.5
	cout << "\n";
	cout << (sqrt(pow(3,2))); //sqrt of a power is the original number
	cout << "\n";
    cout << ceil(5.8); //ceil rounds up to 6
	cout << "\n";
    cout << floor(5.8); //floor rounds down to 5
	cout << "\n";
    cout << rand() %  4  +  10; //random number remainder when divided by 4, add 10
}

//SAMPLE OUTPUT:
//5.5
//3
//6
//5
//13