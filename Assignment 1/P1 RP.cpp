#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

			double R1, R2, R3, v;   //to declare four numbers with decimal point
			cin  >>  R1>>R2>>R3;   // to input three resistors
			cin  >>  v;   // to input voltage supply
			// calculate Iser and I par
			// output  Iser and Ipar
			float Iser(double R1, double R2, double R3, double v);
			float calIser = v/(R1+R2+R3);
			float Ipar(double R1, double R2, double R3, double v);
			float calIpar = v/(1.0/(1.0/R1+1.0/R2+1.0/R3));
			cout<<endl;
			cout<<calIser<<endl;
			cout<<calIpar<<endl;
			
			
}