//CPSC 230 RAVI PATEL DESCENDING BUBBLE ARRAY SORTER
#include <iostream>

using namespace std;

int sort(int *array, int size); //declared sort() - used to sort array in descending order
void display(int array[], int size); //declared display() - used to cout arrays

int sort(int *array, int size) {
int step = 0;
  
	for (int i = 0; i < size; i++) { //sorting here
		for (int j = 1; j < (size - i); j++)
		{
			step += 1;
			if (array[j - 1] < array[j]) // comparing here, < for descending order
			{
				step += 3;
				int temp = array[j - 1]; //swapping here
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
	return step;
}

void display(int array[], int size) { //simple display function used to cout arrays
	cout << "(" << array[0];
	for (int i = 1; i < size; i++)
	{
		cout << "," << array[i];
	}
	cout << ")";
}

int main() {
	
int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //declaring sample arrays and values
int a2[] = {10, 5, 3, 9, 2, 8, 4, 7, 1, 6};
int a3[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int steps = 0; //counting steps for compare and swap declared here
int size = 0; //size of array declared for ordering

	size = sizeof(a1) / sizeof(int); 
	cout << "Sample array #1: ";
	display(a1, size); //display first array
	cout << endl;
	steps = sort(a1, size); //sorting
	cout << "Array #1 In Descending Order: ";
	display(a1, size); //displaying sorted array
	cout <<endl<< steps - 45 << " Swaps &" << " " << steps - (steps - 45) << " Comparisons || " << steps << " total steps completed!" << endl;
	cout<<endl;
	size = sizeof(a2) / sizeof(int);
	cout << "Sample array #2: ";
	display(a2, size); //display second array
	cout << endl;
	steps = sort(a2, size); //sorting here
	cout << "Array #2 In Descending Order: ";
	display(a2, size); //displaying sorted array
	cout <<endl<< steps - 45 << " Swaps &" << " " << steps - (steps - 45) << " Comparisons || " << steps << " total steps completed!" << endl;
	cout<<endl;
	size = sizeof(a3) / sizeof(int);
	cout << "Sample array #3: ";
	display(a3, size); //displaying third array
	cout << endl;
	steps = sort(a3, size); //sorting array here
	cout << "Array #3 In Descending Order: ";
	display(a3, size); //displaying sorted array
	cout <<endl<< steps - 45 << " Swaps &" << " " << steps - (steps - 45) << " Comparisons || " << steps << " total steps completed!" << endl;
  
	return 0; //catch all just in case
}

//PROGRAM OUTPUT:
//Sample array #1: (1,2,3,4,5,6,7,8,9,10)
//Array #1 In Descending Order: (10,9,8,7,6,5,4,3,2,1)
//135 Swaps & 45 Comparisons || 180 total steps completed!
//
//Sample array #2: (10,5,3,9,2,8,4,7,1,6)
//Array #2 In Descending Order: (10,9,8,7,6,5,4,3,2,1)
//48 Swaps & 45 Comparisons || 93 total steps completed!
//
//Sample array #3: (10,9,8,7,6,5,4,3,2,1)
//Array #3 In Descending Order: (10,9,8,7,6,5,4,3,2,1)
//0 Swaps & 45 Comparisons || 45 total steps completed!
