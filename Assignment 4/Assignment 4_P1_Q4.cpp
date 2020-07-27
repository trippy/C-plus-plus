//CPSC 230 RAVI PATEL MAX NUM FINDER
#include <iostream>
int uno = 0;
int dos = 0;
int tres = 0;

using namespace std;
int max1(int a1,int a2,int a3) {
	if (a1 == a2 == a3)
		return 0;
	if (a1 > a2)
		if (a1 > a3)
			return a1;
	if (a2 > a1)
		if (a2 > a3)
			return a2;
	if (a3 > a1)
		if (a3 > a2)
			return a3;
	if (a1 == a3)
		return a3;
	if (a1 == a2)
		return a2;
	if (a2 == a3)
		return a3;
	return 0;
}

int main(){
	cout<<"Input a number: ";
	cin>>uno;
	cout<<"Input a number: ";
	cin>>dos;
	cout<<"Input a number: ";
	cin>>tres;
	cout<<"The maximum number is: "<< max1(uno,dos,tres);
}

//SAMPLE OUTPUT:
//Input a number: 4
//Input a number: 8
//Input a number: 16
//The maximum number is: 16