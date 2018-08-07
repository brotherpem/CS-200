//Pierre Edward Mendy
//CS200
//11/30/2017
//LAB 10 Pointers - Part 2 - Using Dynamic Memory Allocation

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void printArray(const char *, ostream &, const int *, int howMany);

void main()
{
	int * info;
	int used;
	cout << "How many elements in the array? ";
	cin >> used;
	while (used <= 0)
	{
		cout << "Enter a value of 1 or more" << endl;
		cin >> used;
	}
	info = new int[used];// 3 - WRITE THE CODE TO ACQUIRE THE MEMORY FOR THE ARRAY FROM THE HEAP

	for (int i = 0; i < used; i++)// 4 - USING SUBSCRIPTS WRITE THE CODE TO FILL THE ARRAY WITH MULTIPLES OF 3 -
	{
		info[i] = i * 3;// - i.e. cell 0 holds 0, cell 1 holds 3, cell 2 holds 6, etc.
	}
	printArray("Array of data", cout, info, used);

	delete[]info; // 5 - WRITE THE CODE TO RETURN THE MEMORY TO THE HEAP

}//ENDMAIN

void printArray(const char * m, ostream & Out, const int * p, int hm)
{
	Out << m << endl;
	for (int i = 0; i < hm; i++)
	{
		Out << p[i] << endl;
	}
}

/*
How many elements in the array? 6
Array of data
0
3
6
9
12
15
Press any key to continue . . .

*/