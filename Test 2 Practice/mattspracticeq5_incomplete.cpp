// printMenu.cpp : Defines the entry point for the console application.

//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//Declaration of SimpleSum method

int SimpleSum(int a, int b);

//Declaration of SimpleDivision method

double SimpleDivision(int a, int b);

//Declaration of ComplexDivision method

double ComplexDivision(int a, int b, int c, int d);

//Declaration of Max method

int Max(int a,int b, int c);

//Declaration of Hypotenuse method

float Hypotenuse(float x, float y);

//Declaration of CubicEquation method

float CubicEquation(float x, float y, float z, float w, int a);

//Declaration of MinMax method

void MinMax(int a, int b, int c, int d, int e);

//Declaration of Modulus method

void Modulus(int x, int y, int quotient, int remainder);

int main() {

//PART 1

int ch;

int a, b, c, d =0 , e = 0;

float x, y, z, w;

cout << "Please make a selection from the following menu";

do {

cout << endl;

cout << endl;

cout << "1. Simple Sum" << endl;

cout << "2. Simple Division" << endl;

cout << "3. Complex Division" << endl;

cout << "4. Max" << endl;

cout << "5. Hypotenuse" << endl;

cout << "6. cubic equation" << endl;

cout << "7. MinMax " << endl;

cout << "8. Modulus" << endl;

cout << "9. quit" << endl;

cout << endl;

cout << endl;

cout << "Enter the number of the operation you wish to perform: ";

cin >> ch;

switch (ch) {

case 1:

cout << "Please enter two integers:";

cin >> a >> b;

cout << endl;

cout << "sum = " << SimpleSum(a, b) << endl;

break;

case 2:

cout << "Please enter two integers:";

cin >> a >> b;

cout << endl;

if (b > 0) {

cout << "quotient = " << SimpleDivision(a, b) << endl;

}

else {

cout << "Second number(divisor) shoule be more than 0 ";

}

break;

case 3:

cout << "Please enter three integers: ";

cin >> a >> b >> c;

cout << endl;

cout << "Enter divisor ";

cin >> d;

cout << endl;

if (d > 0)

cout << "quotient = " << ComplexDivision(a, b, c, d) << endl;

else {

cout << "Fourth number(divisor) should be more than 0 " << endl;

}

break;

case 4:

cout << "Please enter three integers:";

cin >> a >> b >> c;

cout << endl;

cout << "maximum value is " << Max(a, b, c) << endl;

break;

case 5:

cout << "please enter two float values :";

cin >> x >> y;

cout << endl;

cout << "hypotenuse value is " << Hypotenuse(x, y) << endl;

break;

case 6:

cout << "please enter four float values and value of x:";

cin >> x >> y >> z >> w >>a;

cout << endl;

cout << " cubic equation value is " << CubicEquation(x, y, z, w, a) << endl;

break;

case 7:

cout << "Please enter three integers " << endl;

cin >> a >> b >> c;

cout << endl;

MinMax(a, b, c, d, e);

break;

case 8:

cout << "Please enter two integers " << endl;

cin >> a >> b;

Modulus(a, b, c, d);

break;

case 9:

break;

}

cout << endl;

cout << "Please make a valid selection from the menu";

} while (ch != 9);

return 0;

}

//Implementation of SimpleSum method

int SimpleSum(int a, int b) {

return (a + b);

}

//Implementation of SimpleDivision method

double SimpleDivision(int a, int b) {

double res;

res = (double)a / (double)b;

return res;

}

//Implementation of ComplexDivision method

double ComplexDivision(int a, int b, int c, int d) {

int sum = a + b + c;

double res;

res = (double)sum / d;

return res;

}

//Implementation of Max method

int Max(int a, int b, int c) {

if (a > b) {

if (a > c) {

return a;

}

else {

return c;

}

}

else {

if (b > c) {

return b;

}

else {

return c;

}

}

}

//Implementation of Min method

int Min(int a, int b, int c)

{

if (a<b)

{

if (a<c)

return a;

else

return c;

}

else

{

if (b<c)

return b;

else

return c;

}

}

//Implementation of Hypotenuse method

float Hypotenuse(float x, float y) {

float result;

x = pow(x, 2);

y = pow(y, 2);

result = x + y;

result = pow(result, 0.5);

return result;

}

//Implementation of MinMax method

void MinMax(int a, int b, int c, int d,int e) {

d = Min(a, b, c);

e = Max(a, b, c);

cout << "Minimum " << d << " " << "Maximum " << e <<endl;

}

//Implementation of CubicEquation method

float CubicEquation(float x, float y, float z, float w, int a) {

int x3, x2;

float result = 0;

x3 = pow(x, 3);

x2 = pow(y, 2);

x = x*x3;

y = y*x2;

z = z*a;

result = x + y + z + w;

return result;

}

//Implementation of Modulus method

void Modulus(int a, int b, int c, int d) {

if (a > b) {

c = SimpleDivision(a, b);

d = a - b*c;

cout << "quotient " << c << " " << "remainder " << d;

}

else

{

cout << "quotient " << 0 << " " << "remainder " << a;

}

}