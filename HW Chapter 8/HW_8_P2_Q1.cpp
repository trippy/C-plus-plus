//CPSC 230 RAVI PATEL HW8 P2 Q1
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	string user_input;
	cout << "Please enter a string of text: ";
	getline(cin, user_input);
	int count[26] = {0}, i, wordCount = 0;
	for(i = 0; i < user_input.size(); i++){
		 if(((user_input[i] >= 'a' && user_input[i] <= 'z') || (user_input[i] >= 'A' && user_input[i] <= 'Z')) && (user_input[i + 1] == '.' || user_input[i + 1] == ',' || user_input[i + 1] == ' ')) 
			wordCount++;
		 if(user_input[i] >= 'a' && user_input[i] <= 'z') 
			count[user_input[i] - 'a']++;
		 if(user_input[i] >= 'A' && user_input[i] <= 'Z') 
			count[user_input[i] - 'A']++;
	}
	char x = user_input[user_input.size() - 1];
	if(x != '.' && x != 'z' && x != ' ')
		wordCount++;
	cout << endl << wordCount << " words are in your string" << endl;
	cout << "\nLetter Distribution: \n";
	for(i = 0; i < 26; i++){
		 if(count[i] > 0) cout << count[i] << " " << (char)('a' + i) << endl;
	}
}