//CPSC 230 RAVI PATEL EXAM 2 Q1
//Header Files
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

//Function Prototypes
double calcAverage(double score1, double score2, double score3, double score4);
char findGrade(double avg);
void displayStudent(string name, double avg, char grade);
void printStudent(string name, double avg, char grade);


//Main Function
int main()
{
//Declare Stream Vars
ifstream inFile;
ofstream outFile;
//Open Stream Files
inFile.open ("Text1.txt");
outFile.open ("Text2.txt", ios::app);
//Checking Error Opening Files
if (inFile.fail()) //if opening input file fails
{
	cout << "Error opening input file!" << endl; //display error
	exit(1);
}
if (outFile.fail()) //if opening output file fails
{
	cout << "Error opening input file!" << endl; //display error
	exit(1);
}
//Declare Vars
double score1, score2, score3, score4; 
double average;
char grade;
string name;

cout << std::left << setw(12) << "Names" << setw(12) << "Average" << setw(12) << "Grade" <<endl<<endl;
outFile << std::left << setw(12) << "Names" << setw(12) << "Average" << setw(12) << "Grade" <<endl<<endl;

while (!inFile.eof())
{
	inFile >> name >> score1 >> score2 >> score3 >> score4;
	average=calcAverage(score1, score2, score3, score4);
	grade=findGrade(average);
	displayStudent(name, average, grade);
	printStudent(name, average, grade);
}

cout<<endl;

inFile.close();
outFile.close();
return 0;
}

//Function definition to displayStudent
void displayStudent(string name, double avg, char grade)
{
cout << std::left << setw(12) << name <<setw(12) << avg <<setw(12) << grade<<endl;
}
void printStudent(string name, double avg, char grade)
{
ofstream outFile;
outFile.open ("Text2.txt", ios::app);
outFile << std::left << setw(12) << name <<setw(12) << avg <<setw(12) << grade<<endl;
outFile.close();
}
//Function definition to calcAverage
double calcAverage(double score1, double score2, double score3, double score4)
{
double avg;
avg = (score1 + score2 + score3 + score4)/4.0;
return avg;
}
//Function definition to findGrade
char findGrade(double avg)
{
if(avg >= 90)
{
	return 'A';  
}
else if(avg >= 80)
{
	return 'B';  
}
else if(avg >= 70)
{
	return 'C';  
}
else if(avg >= 60)
{
	return 'D';  
}
else if(avg <= 59)
{
	return 'F';  
}
return 0;
}
