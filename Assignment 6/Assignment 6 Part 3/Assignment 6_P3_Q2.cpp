#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
//CSPC 230 RAVI PATEL ASSIGNMENT 6 PART 3 Q2
//Reads every character of file text1.txt and copies it to
//file text2.txt except that every 'c' is changed to uppercase 
//"C++" in text2.txt
using namespace std;

int main(int argc, char *argv[]) {

ifstream inputFile; //input file
inputFile.open("text1.txt");
ofstream outputfile; //output file
outputfile.open("text2.txt");

char next; //to store char

while(inputFile.get(next)) //read until end of file

	{

		if (next == 'c')
			next = toupper(next); //change letter 'c' to 'C'
			outputfile<<next; //write to output file

		if(next == 'C') //if char is 'C' 
			outputfile<<"++"; //append ++ to it

	}

inputFile.close(); //CLOSE INPUT FILE
outputfile.close(); //CLOSE OUTPUT FILE

	return 0;
}