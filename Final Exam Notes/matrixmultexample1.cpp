//#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
int c[2][1] = { 0 }; //initalize c array 
int a[2][3] = { { 1 ,2,4 }, { 4,5,5 } }; //initialize a array
int b[3][1] = { { 1 },{2}, {3} }; //initialize b array
for (int i = 0; i < 2; ++i) //for each row of a
	for (int j = 0; j <1; ++j) //for each column of b
		for (int k = 0; k < 3 ; ++k) //for each column of a or row of b
		{
			c[i][j] += a[i][k] * b[k][j]; //multiply array values and assign to c array
		}
	for (int i = 0; i < 2; ++i) //for the 2*1 array of c, print out each value
		{
		for (int j = 0; j < 1; ++j) //for the columns
		cout << c[i][j] << "\t";
		cout << endl;
		}
	return 0;
}