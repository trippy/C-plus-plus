//CPSC 230 RAVI PATEL - FINAL EXAM PART 2 QUESTION 2
//functions: encode, multiply, decode

#include <iostream>
using namespace std;

char A[4][2] = {{'R','e'},{'d',' '},{'R','u'},{'m','\0'}}; //original unencrypted matrix
int B[2][2] = {4,-2,-1,3}; //encoding or encryption matrix
float C[4][2]; //matrix containing encrypted data
float Binverse[2][2] = {(3.00/10.00), (1.00/5.00), (1.00/10.00), (2.00/5.00)}; //inverse matrix B
float x[4][2]; //x is the decoded message

void encode(char a[4][2]); //function to encode unencrypted matrix
void multiply(int a[4][2], int b[2][2]); //function to multiply data by encoding matrix
void decode(float c[4][2], float b[2][2]); //function to multiply encrypted matrix by inverse

void encode(char a[4][2])
{
	for (int i=0; i<4; i++) //columns
	{
		for(int j=0; j<2; j++) //rows
			a[i][j] = (int)a[i][j]; //assign a[i][j] the ASCII of text A
	}
		cout << "Unencrypted Data Matrix: \n";

		for (int i = 0; i < 4; ++i) //for the 4*2 array of a, print out each value
			{
			for (int j = 0; j < 2; ++j) //for the rows
			cout << (int)a[i][j] << "\t";
			cout << endl;
			}
		cout << "\n";
}

void multiply(char a[4][2], int b[2][2])
{
	for (int i = 0; i < 4; ++i) //for each column of a
		for (int j = 0; j <2; ++j) //for each column of b
			for (int k = 0; k < 2 ; ++k) //for each row of a or row of b
			{
				C[i][j] += a[i][k] * b[k][j]; //multiply array values and assign to c array
			}
		cout << "Encrypted Data Matrix: \n";

		for (int i = 0; i < 4; ++i) //for the 4*2 array of c, print out each value
			{
			for (int j = 0; j < 2; ++j) //for the rows
			cout << C[i][j] << "\t";
			cout << endl;
			}
		cout << "\n";

}			

void decode(float c[4][2], float b[2][2])
{
	for (int i = 0; i < 4; ++i) //for each column of c
		for (int j = 0; j <2; ++j) //for each column of b
			for (int k = 0; k < 2 ; ++k) //for each row of c or row of b
			{
				x[i][j] += c[i][k] * b[k][j]; //multiply array values and assign to x array
			}
		cout << "Decoded Matrix: \n";

		for (int i = 0; i < 4; ++i) //for the 4*2 array of x, print out each value
			{
			for (int j = 0; j < 2; ++j) //for the rows
			cout << x[i][j] << "\t";
			cout << endl;
			}
}
int main(int argc, char *argv[]) {

	encode(A);
	multiply(A,B);
	decode(C,Binverse);
	
}