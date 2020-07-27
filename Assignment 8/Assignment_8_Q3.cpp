//CPSC 230 RAVI PATEL ASSIGNMENT 8 Q3
#include <iostream>
#include <vector>

using namespace std;
void fillVector(vector<int> &v);
int main(int argc, char *argv[]) {
vector<int> v1;
v1.push_back(10); v1.push_back(20); v1.push_back(25); v1.push_back(30); v1.push_back(40);
vector<int> v2;
v2.push_back(100); v2.push_back(200); v2.push_back(300); v2.push_back(400); v2.push_back(500); v2.push_back(600); v2.push_back(700);
for(int i=0; i<5; ++i)
	cout << v1[i] << ' ';
cout<<endl;
for(int i=0; i<7; ++i)
	cout << v2[i] << ' ';
}
