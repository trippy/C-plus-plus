//CPSC 230 RAVI PATEL BABYNAMES CODE CH 6 Q3
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int numLines = 1000;	// number of lines in the file

int main() {
int i; //int for number of lines in file, used below

ifstream inStream;	//Declare inputstream
ofstream outStreamTop; //Declare output stream top
ofstream outStreamLeast; //Declare output stream Least

inStream.open("babynames2012.txt"); //open files declared above
outStreamTop.open("top_common_10 names.txt", ios::app);
outStreamLeast.open("least common_10 names.txt", ios::app);

if (inStream.fail()) //if error opening file
	{
		cout << "Error opening! -  babynames2012.txt." << endl;
		exit(1);
	}
if (outStreamTop.fail()) //if error opening file
	{
		cout << "Error opening! -  top_common_10 names.txt." << endl;
		exit(1);
	}
if (outStreamLeast.fail()) //if error opening file
	{
		cout << "Error opening! - least common_10 names.txt." << endl;
		exit(1);
	}

for (i=0; i<numLines;i++) //for loop, 1000 iterations (declared above)
{
int rank; //declare int for rank
string boyName, girlName; //declare boys and girls names
inStream >> rank; //first string in set is equal to rank
inStream >> boyName; //second string in set is equal to boyName
inStream >> girlName; //last string in set of line is equal to girlName

for (int j = 0; j<=10; j++){ //for the top 10 common names, append
if (rank == j)
{	
	//cout<<boyName<<"\t"<<girlName<<endl; //used in debugging
	outStreamTop<<boyName<<"\t"<<girlName<<endl; 
}
}

for (int k = 991; k<=1000; k++){ //for the least 10 common names, append
	if (rank == k) 
	{
	//cout<<boyName<<"\t"<<girlName<<endl; //used in debugging
	outStreamLeast<<boyName<<"\t"<<girlName<<endl;
	}
}

}

inStream.close(); //Close the input stream
outStreamTop.close(); //Close the output Top stream
outStreamLeast.close(); //Close the output Least stream
return 0; //catch all
}