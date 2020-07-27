#include <iostream>
#include <math.h>

using namespace std;

class RegularPolygon{
	private:
		double number_sides; //declare n_s
		double apothem, sideLength; //declare a, sL
	public:
		double get_apothem(); //find and return the apothem
		double get_area(); //a=0.5*apothem*perimeter
		double get_perimeter(); 
	RegularPolygon(){
		sideLength = 1; //initialize sL = 1
		number_sides = 4; //initialize n_s = 4
	}
	RegularPolygon(double side_Length, double number_side){
			number_sides = number_side;
			sideLength = side_Length;
		}

};

int main(int argc, char *argv[]) {
	RegularPolygon square(1,4);
	RegularPolygon sq;
	cout<<"Apothem: "<<sq.get_apothem()<<endl;
	cout<<"Area: "<<sq.get_area()<<endl;
	cout<<"Perimeter: "<<sq.get_perimeter()<<endl;
	cout<<endl;
	cout<<"Apothem: "<<square.get_apothem()<<endl;
	cout<<"Area: "<<square.get_area()<<endl;
	cout<<"Perimeter: "<<square.get_perimeter()<<endl;
	return 0;
}

double RegularPolygon::get_apothem(){
	return ((sideLength/2) * cos((180/number_sides)));
}
double RegularPolygon::get_perimeter(){
	return (sideLength * number_sides);
}
double RegularPolygon::get_area(){
	return ((RegularPolygon::get_perimeter() * apothem)/2);
}
