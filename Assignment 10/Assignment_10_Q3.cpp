//CPSC 230 RAVI PATEL Assignment 10 Question 3
#include <iostream>

using namespace std;
double length = 0;
double width = 0;
double height = 0;
double volume = 0;
double area = 0;
class Box{
	public:
		void input();
		void output();
		
		void get_volume();
		//returns the volume of the box
		
		void total_area();
		//returns the total area of the box
		
		double get_length();
		//returns the length of the box
		
		double get_width();
		//returns the width of the box
		
		double get_height();
		//returns the height of the box
	private:
		double box_length();
		double box_width();
		double box_height();
};
int main(int argc, char *argv[]) {
	Box cube; //declare cube as type Box
	cube.input(); //get user input
	cube.get_volume(); //calculate volume using given input
	cube.total_area(); //calculate total area using given input
	cube.output(); //display output to the screen

	return 0;
}

void Box::input(){
	cout << "Enter the length of the box (inch): ";
	cin >> length;
	cout << "Enter the width of the box (inch): ";
	cin >> width;
	cout << "Enter the height of the box (inch): ";
	cin >> height;
}
void Box::output(){
	cout << "\nLength = " << length << " inches"
		<< "\nWidth = " << width << " inches" 
		<< "\nHeight = " << height << " inches" 
		<< "\nVolume = " << volume << " cubic inches"
		<< "\nTotal Area = " << area << " squared inches" << endl;
}

double Box::get_length(){
	return length;
}
double Box::get_width(){
	return width;
}
double Box::get_height(){
	return height;
}
void Box::get_volume(){
	volume = length*width*height; //volume calculation
}
void Box::total_area(){
	area = (2*(height * width)) + (2*(height * length)) + (2*(width * length)); //area calculation
}

//SAMPLE OUTPUT:
//Enter the length of the box (inch): 10
//Enter the width of the box (inch): 10
//Enter the height of the box (inch): 10
//
//Length = 10 inches
//Width = 10 inches
//Height = 10 inches
//Volume = 1000 cubic inches
//Total Area = 600 squared inches