//Pierre Edward Mendy
//CS 200 Fall Semester
// Lab 2 Part 1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, s;
	double area, perimeter;

	cout << "Please enter 3 sides of a triangle in ascending order:";
	cin >> a >> b >> c;

	perimeter = a + b + c;
	s = 0.5 * (perimeter);
	area = sqrt(s * (s - a) * (s - b) * (s - c));

	cout << "Side a: " << a << endl
		<< "Side b: " << b << endl
		<< "Side c: " << c << endl
		<< "perimeter: " << perimeter << endl
		<< "area: " << area << endl;

	if ((c * c) - ((a * a) + (b * b)) == 0)
	{
		cout << "This is a right triangle." << endl;
	}
	else cout << "This is not a right triangle." << endl;

	return 0;

}

/*
Please enter 3 sides of a triangle in ascending order:3
4
5
Side a: 3
Side b: 4
Side c: 5
perimeter: 12
area: 6
This is a right triangle.
Press any key to continue . . .

Please enter 3 sides of a triangle in ascending order:5
6
7
Side a: 5
Side b: 6
Side c: 7
perimeter: 18
area: 14.6969
This is not a right triangle.
Press any key to continue . . .

*/