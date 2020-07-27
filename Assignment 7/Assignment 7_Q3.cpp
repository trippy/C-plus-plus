//CPSC 230 RAVI PATEL ASSIGNMENT 7 Q3DICE ROLLER
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
float six = 0, five = 0, four = 0, three = 0, two = 0, one = 0;
int face;
int i = 60000;
srand (time(0)); //initialized all vars
	
do { 

	face = (rand()%6) + 1; //roll dice and set result to face
	
	if (face == 6) //if face == 6
		 	six++; //add 1 to six counter
	if (face == 5)
			five++;
	if (face == 4)
			four++;
	if (face == 3)
			three++;
	if (face == 2)
			two++;
	if (face == 1)
			one++;
	--i; //go down iterations from 60000 until 0
	}
	
		while (i>0);

int B[6] = {one, two, three, four, five, six};
cout<<"Face"<<"\t"<<"Frequency"<<endl;
for (int k = 1; k<7; k++)
{
	cout<<k<<"\t"<<B[k-1]<<endl;

}
}


