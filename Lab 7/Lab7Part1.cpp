//Lab 7 Part 1
// Pierre Edward Mendy
//11/02/2017

#include <iostream>
using namespace std;

void main()
{
	int x, y;
	cout << " Enter two integers: " << endl;
	cin >> x >> y;

	swap(x, y);

	cout << "The number swapped are : " << x << " and " << y << endl;

}

void sawp(int & first, int & second)
{

	int temp;
	temp = first;
	first = second;
	second = temp;
}

/*
Enter two integers:
4 6
The number swapped are : 6 and 4
Press any key to continue . . .
*/