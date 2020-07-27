#include <iostream>
#include <cmath>

using namespace std;
double basal(double weight)
{
	return 70 * pow((weight/2.2), 0.756);
}

//double physical (double weight, double minutes, double intensity)
//{
//	return (0.0385 * intensity * weight * minutes);
//}
int main()
{
	double weight, cal, totalCal;
	int intensity, minutes;
	char ifContinue;
	//do{
		totalCal = 0;
		//cout <<"Enter weight of person :";
		//cin>>weight;
		totalCal = basal(weight); //added
		cout<<"Pounds:\tCalories required:\n";
		for (int i=100; i<=200; i += 20)
		{
		
			cout<<i<<"\t"<<basal(i)<<"\n";
		
			//cout<<"\nCalories required: "<<basal(i); //added
		}
		//totalCal = basal(weight); //added
		//cout<<"\nCalories required: "<<totalCal; //added
//		cout<<"\n Enter intensity of exercise that person does: ";
//		
//		cin>>intensity;
//		cout<<"\n Enter minutes for exercise: ";
//		cin>>minutes;
//		cout<<"\n Enter calories in your favorite food: ";
//		cin>>cal;
//		totalCal = basal(weight) + physical (weight,minutes,intensity);
//		totalCal *= 1.1;
//		cout<<"\n You can enjoy "<<(totalCal/cal)<<" servings of food daily";
//		cout<<"\n Press 'y' to repeat calculations for different variables ";
//		cin>>ifContinue;
	//}//while (ifContinue == 'y' || ifContinue == 'Y');
	return 0;
	}
