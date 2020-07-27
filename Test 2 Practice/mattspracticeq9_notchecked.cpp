//header files

#include "stdafx.h"

#include <iostream>

#include<fstream>

using namespace std;

//main method

int main()

{

		 //delcare variables

		 char filename[20];

		 fstream file;

		 fstream file2;

		 char c;

		 //prompt and read the file name

		 cout << "Enter file name:";

		 cin >> filename;

		 file.open(filename);

		 if (!file)

		 {

					cout << "File is not exists\n";

					system("pause");

					exit(0);

		 }

		 //Otherwise open the file read the character by character

		 //check whether the vowel is existed or not

		 //If the vowel is existed then copy to the another file

		 else

		 {

							cout << "File opened succefully";

							file2.open("vowels_foobar.txt");

							file2 << "Vowels are:\n\n";

							do

							 {

									 file.get(c);

									 switch (c)

									 {

									 case 'a':

									 case 'A':

									 case 'e':

									 case 'E':

									 case 'i':

									 case 'I':

									 case 'o':

									 case 'O':

									 case 'u':

									 case 'U':

												file2 << c;

												break;

									

									 }

							} while (!file.eof());

cout << "\nVowels are copied to the (vowels_foobar.txt) file\n";

		 }

				 

		 //close the files

		 file.close();

		 file2.close();

		 system("pause");

		 return 0;

}