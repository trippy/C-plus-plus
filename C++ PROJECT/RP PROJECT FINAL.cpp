//CPSC 230 RAVI PATEL CRYPTOGRAPHY PROJECT - USING CAESAR ENCRYPTION/DECRYPTION CIPHER
#include <iostream>
#include <string>
char input[100],c;
int key_shift, user_choice;
char* ciphertext;
using namespace std;

char* encrypt_str(char input[], int key_shift) { //Encrypt given string from input array utilizing the key_shift

	int i = 0; //initialize our counter variable
	char* temp = (char*)malloc(sizeof(char) * 100); //initialize temp && return the pointer to the beginning of the block
	while (i < strlen(input)) { //for each character of the given str input
		if (input[i] >= 'a' && input[i] <= 'z') //if lowercase, assign temp to lowercase char
			temp[i] = 'a' + ((input[i] - 'a') + key_shift) % 26; //get next char in alpha | key_shift gives amount of spaces to switch characters
		if (input[i] >= '0' && input[i] <= '9')
			temp[i] = '0' + ((input[i] - '0') + key_shift % 8);
		if (isnumber(input[i]))
			temp[i] = (int)(input[i] + key_shift);
		else if (input[i] >= 'A' && input[i] <= 'Z') //if uppercase, assign temp to uppercase char
			temp[i] = 'A' + ((input[i] - 'A') + key_shift) % 26; //get next char in alpha | key_shift gives amount of spaces of encryption required
			i++; //iterate i as long as it is less than length of string given
	} //end while loop
	for (int i=0;i<strlen(temp);i++){ //exceptions
		if (temp[i] == ';')
				temp[i] = '1';
		if (temp[i] == ':')
				temp[i] = '0';
	}
	temp[i] = '\0'; //assign null char for the c string to avoid cstr errors
	return temp; //return the encrypted temp str
}

char* decrypt_str(char* ciphertext, int key_shift) { //input ciphertext (encrypted str), using the key_shift 

	int i = 0; //initialize our counter variable
	char* temp = (char*)malloc(sizeof(char) * 100); //assign alpha | using malloc to return null pointer and return to start of counter
	key_shift = 26 - key_shift; //assign key_shift to 26-shift for decryption method

	while (i < strlen(ciphertext)) { //iterate i while in the string

		if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') //if lowercase, decrypt to lowercase
			temp[i] = 'a' + ((ciphertext[i] - 'a') + key_shift) % 26; //get next char in alpha | key_shift for ciphertext decryption
		if (isnumber(ciphertext[i]))
			temp[i] = (ciphertext[i] - (key_shift % 8));
		else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') //if uppercase, decrypt to uppercase
			temp[i] = 'A' + ((ciphertext[i] - 'A') + key_shift) % 26; //get next char in alpha | key_shift for ciphertext decryption
			i++; //iterate i through the length of the string
		} //end while loop 
	for (int i=0;i<strlen(temp);i++){ //exceptions for nums
		if (temp[i] == '/')
				temp[i] = '9';
		if (temp[i] == ':')
				temp[i] = '0';
	}
	temp[i] = '\0'; //assign temp[i] to a null char
	return temp; //return the temp decrypted str
}

void user_input()
{
		cout << "Code Word: ";
		cin >>input;

		cout << "Please Enter Any # For The Key: ";
		cin >> key_shift;

		cout << "Which would you like to do?\n1 - Encrypt\n2 - Decrypt\nChoice: ";
		cin >> user_choice;	
}

void ed_display()
{
	if (user_choice == 1) {
			
			ciphertext = encrypt_str(input, key_shift);
			cout << "Encryption Complete!\nYour Encrypted Code Word is: " << ciphertext;
		}

		else {
			
			cout << "Decryption Complete!\nYour Decrypted Code Word is: " << decrypt_str(input, key_shift);
		}
}
void continue_choice()
{
	cout << "\nWould you like to continue? Enter 'y' to continue.\nChoice: ";
	cin >> c;
}
bool yes_choice()
{
	return c == 'y' || c == 'Y';
}
void intro()
{
	cout <<"____________________________________________\n";
	cout <<"|                                          |\n";
	cout <<"| Welcome to Ravi's Caesar Cipher Program! |\n";
	cout <<"|                                          |\n";
	cout <<"|__________________________________________|\n";

}
void ending()
{
	cout <<"_____________________________________________________\n";
	cout <<"|                                                   |\n";
	cout <<"| Thank you for using Ravi's Caesar Cipher Program! |\n";
	cout <<"|                                                   |\n";
	cout <<"|___________________________________________________|\n";

}
int main(int argc, char *argv[]) {
	intro();
do {
	user_input();
	ed_display();
	continue_choice();

} while (yes_choice());
getchar(); //return the next character from the standard input
ending();
return 0; //catch all

}