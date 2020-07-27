#include <iostream>

using namespace std;

int main()

{

FILE *f;

char filename[100];

char ch;

int lcount, wcount, ccount;

// Initialize counter variables

lcount = 0;

wcount = 0;

ccount = 0;

// User enter the filename

cout<<"Enter a filename :";

gets(filename);

  

// Open file in read-only mode

f = fopen(filename,"r");

// If file opened successfully, then write the string to file

if ( f )

{

//Repeat until End Of File character is reached.

while ((ch=getc(f)) != EOF) {

// Increment character count if NOT new line or space

if (ch != ' ' && ch != '\n') { ++ccount; }

  

// Increment word count if new line or space character

if (ch == ' ' || ch == '\n') { ++wcount; }

// Increment line count if new line character

if (ch == '\n') { ++lcount; }

}

if (ccount > 0) {

++lcount;

++wcount;

}

}

else

{

cout<<"Failed to open the file\n";

}

cout<<"The File Contains "<<wcount<<" words."<<endl;

getchar();

return(0);

}