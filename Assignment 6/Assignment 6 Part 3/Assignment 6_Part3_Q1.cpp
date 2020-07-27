#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
//CPSC 230 RAVI PATEL ASSIGNMENT 6 PART 3 Q1 (not finished - unsolved)

using namespace std;
int words_count(int& length, ifstream& in);
int main() 
{ 
	int length(0), length1(0);

	ifstream in;
	in.open("text1.txt");

	words_count(length, in);//count the number of words
	cout << "number of words = " << length << endl;

	in.clear();  // to clear the data of the object in and  
	in.seekg(0, ios::beg);// seek to the beginning

	//character_count(length1, in);// how many characters
	cout << "number of characters = " << length1 << endl;

	in.close();
	return 0;
}

int words_count(int& length, ifstream& in){
int ch = length, wcount;
while (!in.eof()) {


if (ch == ' ' || ch == '\n') { ++wcount; }

return wcount;

}
}

//SAMPLE OUTPUT:
//number of words = 0 //should be 24
//number of characters = 0 //should be 96