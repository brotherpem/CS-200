//Pierre Edward Mendy
//CS200
//11/30/2017
//LAB 10 Pointers - Complete the missing 5 portions of part1 (2 additions) and part2 (3 additions).  These are two separate applications.

#include <iostream>
#include <string>
#include <ctime>
using namespace std;



int largeArray(const int[], int);
int largePointer(const int *, int);
void fillArray(int *, int howMany);
void printArray(const char *, ostream &, const int *, int howMany);

const int low = 50; const int high = 90;

void main()
{
	const int MAX_SIZE = 40;
	int info[MAX_SIZE];
	int used;
	cout << "How many elements in the array? ";
	cin >> used;
	while (used <= 0 || used > MAX_SIZE)
	{
		cout << "Enter a value between 1 and " << MAX_SIZE << "How many elements in the array? ";
		cin >> used;
	}
	fillArray(info, used);
	printArray("Array of data", cout, info, used);

	cout << "The largest element using subscripts is " << largeArray(info, used) << endl;
	cout << "The largest element using pointers is " << largePointer(info, used) << endl;
}

//ENDMAIN

void printArray(const char * m, ostream & Out, const int * p, int hm)
{
	Out << m << endl;
	for (int i = 0; i < hm; i++)
	{
		Out << p[i] << endl;
	}
}
void fillArray(int * p, int howMany) // as parameters, pointers and arrays are one and the same
{
	int range = high - low + 1;
	srand(time(0));
	for (int i = 0; i < howMany; i++)
	{
		p[i] = rand() % range + low;
	}
}
int largeArray(const int data[], int howMany) // use subscripts
{
	int largest = 0;
	for (int i = 0; i < howMany; i++)	// 1 - WRITE THE CODE TO FIND THE LARGEST NUMBER - USE SUBSCRIPTS TO ACCESS THE ELEMENTS 
	{
		if (data[i] > largest)
		{
			largest = data[i];
		}
	}

	return largest;
}
int largePointer(const int * data, int howMany) // use pointers
{
	int largest = 0;
	for (int i = 0; i < howMany; i++)	// 2 - WRITE THE CODE TO FIND THE LARGEST NUMBER - USE POINTERS TO ACCESS THE ELEMENTS 
	{
		if (*(data + i) > largest)
		{
			largest = *(data + i);
		}

	}


	return largest;
}

/*
How many elements in the array? 6
Array of data
58
60
75
65
53
74
The largest element using subscripts is 75
The largest element using pointers is 75
Press any key to continue . . .

*/