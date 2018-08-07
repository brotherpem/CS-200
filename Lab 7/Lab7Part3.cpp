//Lab 7 Part 3
// Pierre Edward Mendy
//11/02/2017
#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);
int sum(int, int, int, int);
int sum(int, int, int, int, int);

int main()
{

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	cout << "The total sum is: " << sum(a, b) + sum(a, b, c) + sum(a, b, c, d) + sum(a, b, c, d, e) << endl;
	return 0;
}

int sum(int a, int b)
{

	return a + b;
}

int sum(int a, int b, int c)
{

	return a + b + c;
}

int sum(int a, int b, int c, int d)
{
	return a + b + c + d;
}

int sum(int a, int b, int c, int d, int e)
{
	return a + b + c + d + e;
}

/*
The total sum is: 34
Press any key to continue . . .

*/