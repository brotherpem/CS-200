//Pierre Edward Mendy
//Lab 9 part1
//11/08/2017

#include <iostream>
using namespace std;

void addLetterS(const char orig[], char plural[]);

void main()
{

	char a[10];
	char b[10];

	cout << "Enter word ";
	cin >> a;

	addLetterS(a, b);

	cout << "The plural version is " << b << endl;
}

void addLetterS(const char orig[], char plural[])
{
	int i;
	for (i = 0; orig[i] != '\0'; i++)
	{
		plural[i] = orig[i];


	}
	plural[i] = 's';
	plural[i + 1] = '\0';


}

/*
Enter word School
The plural version is Schools
Press any key to continue . . .

*/