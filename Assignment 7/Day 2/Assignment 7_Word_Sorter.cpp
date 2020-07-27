//CPSC 230 RAVI PATEL WORD LIST SORTER
#include <iostream>

using namespace std;

const int word_count = 10; //we will use a set of 10 words
void sorted(string wordArray[],int n); //declare sorting function

int main() {

string WordArray[word_count]; //declare wordArray
string user_input; //declare user_input for user
int i; //int i for use in for loops

for(i = 0 ; i < word_count ; i++)
	{
		cout<<"Enter a word: "; //ask user input
		cin>>user_input; //assign user input
		WordArray[i] = user_input; //assign user input to the word array
	}

	sorted(WordArray,word_count); //call sort function

	cout<< endl << "Words sorted in alphabetical order: "; //display sorted words

for(i = 0 ; i < word_count ; i++) //this for loop will compare word with null character, adding space in list
	{
		if( WordArray[i].compare("\0") != 0 ) //compare with null character
		cout << WordArray[i] << " "; //if null character, output space for formatting
	}
	return 0; //catch all
}

void sorted(string wordArray[],int n) { //sorter function to sort words in array alphabetically

int least, i;
string compared_word;

for(i = 0; i < (n -1); i++) {

	least = i;
	compared_word = wordArray[i];

	for(int j = i+1; j < n; j++)
		{
		  if (wordArray[j].compare(compared_word)<0) //comparison made here
			  {
				compared_word = wordArray[j];
				least = j;
			  }

		 }
		
		wordArray[least] = wordArray[i];
		wordArray[i] = compared_word;
	}
}

//SAMPLE OUTPUT:
//Enter a word: apple
//Enter a word: boat
//Enter a word: aardvark
//Enter a word: cat
//Enter a word: dog
//Enter a word: mouse
//Enter a word: happy
//Enter a word: sad
//Enter a word: male
//Enter a word: female
//
//Words sorted in alphabetical order: aardvark apple boat cat dog female happy male mouse sad 