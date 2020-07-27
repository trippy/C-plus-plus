string line;
int random = 0;
int numOfLines = 0;
ifstream File("file.txt");

	srand(time(0));
	random = rand() % 50;

while(getline(File, line))
{
	++numOfLines;

	if(numOfLines == random)
	{
		cout << line;
	}

}