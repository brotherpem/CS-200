//Pierre Edward Mendy
//Lab 8 part 3
//11/08/2017
#include <iostream>
#include <fstream>
using namespace std;

void inputData(istream &, int a[], int i);
void printData(ostream &, const int a[], int i);
void copyArray(const int orig[], int dup[], int i);
void revCopy(const int orig[], int rev[], int i);

int main()
{

	ifstream in;
	ofstream out;

	int a[4] = { 7,14,9,10 };
	int b[4];



	copyArray(a, b, 4);
	printData(cout, b, 4);
	cout << endl;

	inputData(cin, a, 4);
	printData(cout, a, 4);
	cout << endl;

	revCopy(a, b, 4);
	printData(cout, a, 4);
	printData(cout, b, 4);



	return  0;

}

void inputData(istream &, int a[], int i)
{
	cout << "Please input 4 values. " << endl;

	for (i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
}

void printData(ostream & dout, const int a[], int i)
{
	for (i = 0; i <4; i++)
	{
		dout << a[i] << endl;
	}
}

void copyArray(const int orig[], int dup[], int i)
{
	for (i = 0; i < 4; i++)
	{
		dup[i] = orig[i];
	}
}

void revCopy(const int orig[], int rev[], int i)
{
	for (i = 0; i < 4; i++)
	{
		rev[i] = orig[3 - i];
	}
}

/*
7
14
9
10
Please input 4 values.
1
2
3
4
1
2
3
4
1
2
3
4
4
3
2
1
Press any key to continue . . .
*/