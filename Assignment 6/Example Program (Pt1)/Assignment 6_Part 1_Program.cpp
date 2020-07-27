//CPSC 230 RAVI PATEL FSTREAM ASSIGNMENT 6 PART 1
#include <iostream> //for display functions
#include <fstream> //for file functions
#include <cstdlib> //for exit function
using namespace std;
int main(int argc, char *argv[]) {
	int a; //declare int a for display below
	int sum = 0; //declare int sum for calculation below
	int avg = 0; //declare int avg for calculation below
	ifstream inf; //declare input file
	ofstream ouf; //declare output file
	inf.open("itextfile.txt"); //input file open itextfile.txt
	//ouf.open("otextfile.txt"); //open output file otextfile.txt
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

	while (!inf.eof()) //while not at the end of the file
		{
			inf >> a; //equivalent to cin >> a; read file line by line
			avg++; //add to number counter for average calculation below
			ouf << a << endl; //output values to output file
			sum += a; //add number to sum for output to file below
			cout << a << endl; //display value of a line by line
		}

		ouf << sum << endl; //append sum to output file
		ouf << sum/avg << endl; //append average to output file
	inf.close(); //input file close 
	ouf.close(); //close output file
}

//SAMPLE OUTPUT FILE:
//10
//20
//30
//60
//20