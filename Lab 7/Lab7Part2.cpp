//Lab 7 Part 2
// Pierre Edward Mendy
//11/02/2017
#include <iostream>
using namespace std;

bool compute(int one, int two, int & sum, int & product, double & quotient);

void main()
{
	int x, y, sum, product;
	double quotient;

	cout << "Enter two integers" << endl;
	cin >> x >> y;

	if (compute(x, y, sum, product, quotient))
	{
		cout << "Sum: " << sum << endl
			<< "Product: " << product << endl
			<< "Quotient: " << quotient << endl;
	}
	else
	{
		cout << "Sum: " << sum << endl
			<< "Product: " << product << endl
			<< "Quotient:" << "INVALID" << endl;
	}
}

bool compute(int one, int two, int & sum, int & product, double & quotient)
{
	bool answer;
	sum = one + two;
	product = one * two;
	if (two != 0)
	{
		quotient = (double)one / (double)two;
		answer = true;
	}
	else
	{
		answer = false;
	}
	return answer;
}

/*
Enter two integers
2 4
Sum: 6
Product: 8
Quotient: 0.5
Press any key to continue . . .

*/