//CPSC 230 RAVI PATEL COS(X)
#include <cmath>
#include <iostream>

#define PI      3.1415926535  /* pi */

using namespace std;

int main(int argc, char *argv[]) {

int n, i, j, f(1), k(1);

double x, sum;

	x = 30; n = 10;

	x = x*PI /180;

	cout << cos(x)<<endl;
	
	sum = x;

	for (i = 3; i < n; i+=2)

	{

	f = 1;

	for (j = 2; j <= i; j++)  f *= j;

	sum += pow(-1, k) * pow(x, 2*i) / 2*f;

	k = k+1;

		}

	cout << sum << endl;

		return 0;

	}
	
//OUTPUT:
//0.866025
//1.84884

