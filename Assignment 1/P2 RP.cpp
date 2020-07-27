#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
			double Feh, Cel ;   //to declare two numbers with decimal point
	    	//cin  >>  Feh;   // to input Fahrenheit value
	float calCel(Feh);
	float calC = (5/9)*(Feh-32);
			// calculate the equivalent Celsius
			//float cels(Feh) = (5/9)*(Feh-32);
			//cout>>cels;
			// output the Celsius value
			cin  >>  Cel;   // to input Celsius value
			float calFeh(Cel);
			float calF = 1.8*Cel+32.0;
						cout<<calF<<endl;
			// calculate the equivalent Fahrenheit
			//float fah(Cel)=1.8*Cel+32.0;
			//cout>>fah;
			// output the Fahrenheit value
			
			//float calCel(Feh);
			//float calC = (5/9)*(Feh-32);

			//float calIpar = v/(1.0/(1.0/R1+1.0/R2+1.0/R3));
			cout<<endl;
			cout<<calF<<endl;
			cout<<calC<<endl;
}