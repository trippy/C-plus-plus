//CPSC 230 RAVI PATEL ASSIGNMENT 7 PART 2
#include <iostream>

using namespace std;

int a[3][3],i,j;
int determinant=0;
void calc_determinant(); // return the determinant of array a
void input();
void display();

int main() {
		input();
		display();
		calc_determinant();
}

void input(){
	cout<<("Enter the 9 elements of matrix: ");
		for(i=0;i<3;i++)
				for(j=0;j<3;j++)
						cin>>a[i][j];
}
void display(){
	cout<<"\n"<<("The matrix is: ")<<"\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<(a[i][j])<<"\t";
		}
	cout<<endl;
	}
}
void calc_determinant(){
for(i=0;i<3;i++)
	determinant = determinant + (a[0][i] * (a[1][ (i+1) % 3 ] * a[2][ (i+2) %3 ] - a[1][(i+2)%3] * a[2][ (i+1) % 3] ) );

cout<<"\n"<<"Determinant of the matrix is: "<<determinant;	
}

//SAMPLE OUTPUT:
//Enter the 9 elements of matrix: 393 381 384 12 49 3 0 1 9 12
//
//The matrix is: 
//393	381	384	
//12	49	3	
//0	1	9	
//
//Determinant of the matrix is: 135594