//CPSC 230 RAVI PATEL VOID SORT3
#include <iostream>

using namespace std;
int a, b, c;
int d, e, f;
void sort3d(int& d, int& e, int& f);
void sort3a(int& a, int& b, int& c);
void display();
void input();

int main(int argc, char *argv[]) {
	input();
	sort3d(d,e,f);
	sort3a(a,b,c);
	display();
}

void input(){

	cout << "Input 3 numbers ABC: "<<endl;
	cin >> a>>b>>c;
	cout << "Input 3 numbers DEF: "<<endl;
	cin >> d>>e>>f;
}

void sort3d(int& d, int& e, int& f){ //descending order
	if (d < e) //1st, 2nd
		swap(d, e); //swap 1st and 2nd
	if (e < f) //2nd, 3rd
		swap(e, f); //swap 2nd and 3rd
	if (d < f) //2nd, 3rd
		swap(d, f); //swap 2nd and 3rd
	return;
}

void sort3a(int& a, int& b, int& c) //ascending order
{
	if (a > b) //1st, 2nd
		swap(a, b); //swap 1st and 2nd
	if (b > c) //2nd, 3rd
		swap(b, c); //swap 2nd and 3rd
	if (a > b) //1st, 2nd
		swap(a, b); //swap 1st and 2nd
	return;
}

void display(){
	cout<<"A, B, C in ascending order: "<<"\t"<< a<<"\t"<< b<<"\t"<< c<< endl;
	cout<<"D, E, F in descending order: "<<"\t"<< d<<"\t"<< e<<"\t"<< f;
}

//SAMPLE OUTPUT:
//Input 3 numbers ABC: 
//42
//420
//4
//Input 3 numbers DEF: 
//6
//690
//69
//A, B, C in ascending order: 	4	42	420
//D, E, F in descending order: 	690	69	6
