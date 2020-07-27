#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void swapFrontBack(vector<int> &v)
	{
		int i;
		if(v.size()==0)
			cout<<"Vector empty\n";
		else {
			cout<<"\nElements of vector before swapping : "<<endl;
			for(i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
			cout<<endl;
			swap(v[0],v[v.size()-1]);
			cout<<"\nElements of vector after swapping : "<<endl;
			for(i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
			}
	}	
int main()
	{

		ifstream inStream;	//Declare inputstream
		inStream.open("text1.txt"); //open files declared above
		vector<int> rainfall(5);
		if (inStream.fail()) //if error opening file
			{
				cout << "Error opening! -  text1.txt." << endl;
				exit(1);
			}
		// open file    
		ifstream inputFile("/home/shared/data4.txt");

		// test file open   
		if (inStream) {        
			double value;

			// read the elements in the file into a vector  
			while ( inStream >> value ) {
				rainfall.push_back(value);
			}
		}
		cout<<rainfall[4];
		int n,i;

		cout<<"Enter size of vector : ";
		cin>>n;
		vector<int> v(n);
		cout<<"Enter "<<n<<" elements : ";
		for(i=0;i<n;i++)
			cin>>v[i];
			swapFrontBack(v);
		inStream.close(); //Close the input stream
	}