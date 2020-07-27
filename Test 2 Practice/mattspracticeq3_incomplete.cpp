#include <iostream>
#include <iomanip>

int main()
{
	const int indent = 20;
	int extra= 0;
	std::cout << std::setfill( ' ' );
	std::cout << "Number" << std::setw( indent ) << "Square" << std::endl;
	
	for( int i = 0; i < 20; ++i )
	{
		if( i < 10 ) extra = 0;
		else if( i < 100 ) extra = 1;
		std::cout << i << std::setw( indent - 1 - extra ) << ' ';
		std::cout <<  i * i << std::endl; 
	}
	return( 0 );
}