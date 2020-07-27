//CPSC 230 RAVI PATEL CHAR INPUT SWAP DISPLAY
#include <iostream>

using namespace std;
char char1;
char char2;

void swap(char* ch1,char* ch2 );
void input();
void display();

int main(int argc, char *argv[]) {
	input();
	swap(char1,char2);
	display();
  
	return 0;
}

void input(){

	cout << "Input Char 1: ";
	cin >> char1;
	cout << "Input Char 2: ";
	cin >> char2;
}
void swap(char* ch1,char* ch2 ){
	char temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}
void display(){
	cout << "\nChar 1 swapped is: "<<char1<<endl;
	cout << "Char 2 swapped is: "<<char2;
}

//SAMPLE OUTPUT:
//Input Char 1: a
//Input Char 2: h
//
//Char 1 swapped is: h
//Char 2 swapped is: a