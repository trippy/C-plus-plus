//CPSC 230 RAVI PATEL ASSIGNMENT 8 Q2
#include <iostream>

using namespace std;
void f(string);
string s = ("But I have heard it works, even if you don't believe in it");

int main(int argc, char *argv[]) {
	f(s);
	cout<<s;
}
void f(string)
{
	s.replace(s.replace(s.replace(0,4,"").find("even"),4,"only").find("don't"),6,""); //04 for but, switch even 4 only, find don't and erase it
}