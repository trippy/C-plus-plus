#include <iostream>

class BaseClass {

	public:

		BaseClass( ) : baseValue (20) { };

		BaseClass(int aValue) : baseValue (aValue) { };

		int baseValue;

};

class DerivedClass : public BaseClass {

	public:

		DerivedClass() : derivedValue (10) { }; // a short way to write a constructor

		DerivedClass (int aDerivedValue) : BaseClass(15), derivedValue(aDerivedValue){ }; //// a short way to write a constructor

		int getDerivedValue( ) { return derivedValue; }

	private:

		int derivedValue;
	
};

int main( )

{ 
BaseClass base;
DerivedClass child(5);

std::cout<<"baseValue using base object: "<<base.baseValue<<std::endl;
std::cout<<"baseValue using child object: "<<child.baseValue<<std::endl;
std::cout<<"derivedValue using child object: "<<child.getDerivedValue()<<std::endl;
BaseClass Base(100);
std::cout<<"baseValue using BaseClass: "<<Base.baseValue<<std::endl;
std::cout<<"Impossible to print bassValue using Derived Class! Error.";


return 0;

}