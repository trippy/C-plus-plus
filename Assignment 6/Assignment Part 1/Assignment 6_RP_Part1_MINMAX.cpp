//CPSC 230 RAVI PATEL ASSIGNMENT 6 PART 1 MINMAX DIFFERENCE
#include <iostream> //for display functions
#include <fstream> //for file functions
#include <cstdlib> //for exit function
using namespace std;
int main(int argc, char *argv[]) {
	double a; //declare double a for display below
	double max; //declare max as a double
	double min; //declare min as a double
	double difference;
	ifstream inf; //declare input file
	ofstream ouf; //declare output file
	inf.open("itextfile.txt"); //input file open itextfile.txt
	ouf.open("otextfile.txt", ios::app); //open output file as an append
	if (ouf.fail()) //if opening input file fails
		{
			cout << "Error opening output file!" << endl; //display error opening file
			exit(1); //exit program
		}
	if (inf.fail()) //if opening input file fails
		{
			cout << "Error opening input file!" << endl; //display error opening file
			exit(1); //exit program
		}
inf >> a; //read input file a
max = a; //assign max to a
min = a; //assign min to a
	while (!inf.eof()) //while not at the end of the file
		{
			inf >> a; //read values line by line, assign to a
			if (a > max) //if value is greater than max
			{
				max = a; //max = a
			}
			if (a < min) //if value is less than min
			{
				min = a; //min = a
			}
		}
		difference = max - min;
		ouf << "Maximum value in file: " << max << endl; //output values to output file
		cout << "Maximum value in file: " << max << endl; //display value of max 
		ouf << "Minimum value in file: " << min << endl; //output values to output file
		cout << "Minimum value in file: " << min << endl; //display value of min 
		ouf << "Difference between max and min: " << difference << endl; //output value of difference to output file
		cout << "Difference between max and min: " << difference << endl; //display value of difference
	inf.close(); //input file close 
	ouf.close(); //close output file
}
