//CPSC 230 RAVI PATEL EXAM 2 Q2
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double windchill(double temp, double speed);
double windchill(double temp, double speed)
{
	return 13.12 + 0.6215 * temp - 11.37 * (pow(speed,0.16)) + 0.3965 * temp * (pow(speed,0.16));
}


int main()
{
	double temp, speed;
		cout<<std::right<<setw(14)<<"0"<<setw(11)<<"5"<<setw(13)<<"10"<<setw(12)<<"15"<<setw(11)<<"20"<<endl;
		for (temp=-20; temp<=0; temp += 5)
		{
			cout<<std::left<<temp<<"\t";
			for (speed=0; speed<= 20; speed += 5)
				cout<<std::right<<setw(12)<<windchill(temp,speed);
			cout<<endl;
		}
		

	return 0;
	}
