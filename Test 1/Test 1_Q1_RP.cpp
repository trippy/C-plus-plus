//CPSC 230 RAVI PATEL 4 DIGIT FINDER, TEST 1
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	for(int i = 2; i <= 9; i += 1) //thousands - starts at 2 because must be double tenths digit
		for(int j = 0; j <= 9; j += 1) //hundreds - can be any value 
			for(int k = 0; k <= 4; k += 1) //tens - can only go upto 4 because thousandths digit is double it
				for(int l = 0; l <= 8; l += 2) //ones - even
					if (l != k)
						if (l != j)
							if (l != i)
								if (k != j)
									if (k != i)
										if (j != i)
											if (i == k*2) //if thousandths digit is double tens digit 
												if (i + j + k + l == 25) //if all of them added == 25
													cout<<"The 4 digit number is: "<<i<<j<<k<<l<<endl; //display number(s)
}