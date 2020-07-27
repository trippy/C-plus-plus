#include <iostream>

using namespace std;
double profit[4];
double nor_profit[4];
void calculate (int production[4][4]);
int max_profit(double profit[4]);


int input()
{
	int x;
	cin >> x;
	return x;
}

void calculate (int production[4][4])
{
	profit[0] = (production[0][2]-production[0][1])*production[0][3];
	profit[1] = (production[1][2]-production[1][1])*production[1][3];
	profit[2] = (production[2][2]-production[2][1])*production[2][3];
	profit[3] = (production[3][2]-production[3][1])*production[3][3];

}
int max_profit(double profit[4]) //print out the company with the highest profit
{
	if (profit[0] > profit[1])
	{
		if (profit[0] > profit[2])
		{
			if (profit[0] > profit[3])
			{
				cout<<"\nThe company with the highest profit is company 1, with a profit of: $"<<profit[0];

			}
		}
	}
	if (profit[1] > profit[0])
		{
			if (profit[1] > profit[2])
			{
				if (profit[1] > profit[3])
				{
					cout<<"\nThe company with the highest profit is company 2, with a profit of: $"<<profit[1];

				}
			}
		}
		
	if (profit[2] > profit[0])
		{
			if (profit[2] > profit[1])
			{
				if (profit[2] > profit[3])
				{
					cout<<"\nThe company with the highest profit is company 3, with a profit of: $"<<profit[2];

				}
			}
		}
		
	if (profit[3] > profit[0])
		{
			if (profit[3] > profit[1])
			{
				if (profit[3] > profit[2])
				{
					cout<<"\nThe company with the highest profit is company 4, with a profit of: $"<<profit[3];

				}
			}
		}
	return 0;
}
void min_profit(double profit[4]) //normalize profits - incomplete
{
	if (profit[0] < profit[1])
	{
		if (profit[0] < profit[2])
		{
			if (profit[0] < profit[3])
			{
				cout<<"\nThe company with the lowest profit is company 1, with a profit of: $"<<profit[0];

			}
		}
	}
	if (profit[1] < profit[0])
		{
			if (profit[1] < profit[2])
			{
				if (profit[1] < profit[3])
				{
					cout<<"\nThe company with the lowest profit is company 2, with a profit of: $"<<profit[1];

				}
			}
		}
		
	if (profit[2] < profit[0])
		{
			if (profit[2] < profit[1])
			{
				if (profit[2] < profit[3])
				{
					cout<<"\nThe company with the lowest profit is company 3, with a profit of: $"<<profit[2];

				}
			}
		}
		
	if (profit[3] < profit[0])
		{
			if (profit[3] < profit[1])
			{
				if (profit[3] < profit[2])
				{
					cout<<"\nThe company with the lowest profit is company 4, with a profit of: $"<<profit[3];

				}
			}
		}
}
void normalize_profit(double profit[4])
{
	nor_profit[0] = ( profit[0] - profit[0] / ((profit[3]) - (profit[0])) + 1.0 * 10.0);
	nor_profit[1] = ( profit[1] - profit[0] / ((profit[3]) - (profit[0])) + 1.0 * 10.0);
	nor_profit[2] = ( profit[2] - profit[0] / ((profit[3]) - (profit[0])) + 1.0 * 10.0);
	nor_profit[3] = ( profit[3] - profit[0] / ((profit[3]) - (profit[0])) + 1.0 * 10.0);
	cout<<"\nNormalized Profits for companies 1-4: \n";
		for(int i=0;i<4;i++){ //display nor_profit array
			cout<<"Company "<<i+1<<": $"<<nor_profit[i]<<"\t";
		}
}
int main()
{
	int production[4][4]; //creates a 4*4 matrix

	for(int i=0; i<4; i++)    //loop rows
	{
		for(int j=0; j<4; j++) //loop columns
		{
			production[i][j] = input(); 
		}
	}
	cout<<std::left<<"\n\n\n\nCompany\t\tCost\t\tSell Price\t#Sold/Year\n";
	for(int i=0; i<4; i++)    //loop rows
	{
		for(int j=0; j<4; j++) //loop columns
		{
			cout << std::left << production[i][j]  << "\t\t";
		}
		cout << endl;
	}
	calculate(production); //calculate profit per year and save in array profit[]
	max_profit(profit);
	min_profit(profit);
	normalize_profit(profit);
}