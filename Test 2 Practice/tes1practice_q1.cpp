// C++ code

#include <iostream>
#include <stdlib.h>
using namespace std;

void getInput(string name[], int marks[][4])
{
for(int i=0;i<5;i++){

cout<<"\nEnter student "<<i+1<<" name: ";

getline(cin,name[i]);

cout<<"Enter four subject marks: ";

for(int j=0;j<4;j++){

cin>>marks[i][j];

while(true)
{
if(marks[i][j] >= 0 && marks[i][j] <= 100)
break;
else
{
cout << "Invalid Input\nEnter again: ";
cin >> marks[i][j];
}
}

}

cin.ignore();
}
}

void avgAndGrade(double avg[], int marks[][4], char grade[])
{
for(int i=0;i<5;i++)

{

int sum=0;

for(int j=0;j<4;j++){

sum=sum+marks[i][j];

}

avg[i]=sum/4.0;

if(avg[i]>90.0&&avg[i]<=100.0){

grade[i]='O';

}

else if(avg[i]>80.0&&avg[i]<=90.0){

grade[i]='A';

}

else if(avg[i]>70.0&&avg[i]<=80.0){

grade[i]='B';

}

else if(avg[i]>60.0&&avg[i]<=70.0){

grade[i]='C';

}

else if(avg[i]>50.0&&avg[i]<=60.0){

grade[i]='D';

}

else if(avg[i]<=50.0){

grade[i]='F';

}

}
}

int main()

{

string name[5];

char grade[5];

double avg[5];

int marks[5][4];

getInput(name,marks);

avgAndGrade(avg, marks, grade);

for(int i=0;i<5;i++)

{

cout<<"\n\nName :"<<name[i];

cout<<"\nAverage : "<<avg[i];

cout<<"\nGrade : "<<grade[i];

}

return 0;

}

/*
output:

Enter student 1 name: Edwin Allen Coe
Enter four subject marks: 0 75 89 98

Enter student 2 name: Roger K. Mueller
Enter four subject marks: 100 93 85 80

Enter student 3 name: Babbet Ruth
Enter four subject marks: 50 67 81 100

Enter student 4 name: Rickey "Shuffle" Woods
Enter four subject marks: 98 96 100 92

Enter student 5 name: Wynona Fudd
Enter four subject marks: 83 40 87 88


Name :Edwin Allen Coe
Average : 65.5
Grade : C

Name :Roger K. Mueller
Average : 89.5
Grade : A

Name :Babbet Ruth
Average : 74.5
Grade : B

Name :Rickey "Shuffle" Woods
Average : 96.5
Grade : O

Name :Wynona Fudd
Average : 74.5
Grade : B

*/