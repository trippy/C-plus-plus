//CPSC 230 RAVI PATEL RAND NUM GENERATOR & AVG
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	float avg = 0;
	srand(time(NULL)); 
	int rand_integer; 
	int min=30, max=50; 
	int range=(max-min)+1; 
	for(int index=0; index<10; index++){ 
		rand_integer = (min + int((double)range*rand()/(double)(RAND_MAX + 1.0))); 
		avg += rand_integer;
		cout << rand_integer << endl; 
		}
		cout << "Average of 10 numbers between 30 and 50 is: " << avg/10;
}

//SAMPLE OUTPUT:
//34
//49
//50
//50
//46
//32
//31
//35
//41
//35
//Average of 10 numbers between 30 and 50 is: 40.3