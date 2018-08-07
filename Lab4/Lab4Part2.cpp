//Pierre Edward Mendy
//Lab 4 - Part2  owedTax double function...use double parameter and return a double value
//10/02/2017
// Double income FUNCTION called owedTax

#include <iostream>
using namespace std;

//Declaration of  function 
double owedTax(double);


int main()
{
	double income = 0;
	cout << "Please enter your personal income." << endl;
	cin >> income;

	if (income > 0)
		cout << "You owe $" << owedTax(income) << " tax based on your income." << endl;
	else
		cout << "Invalid income." << endl;

	return 0;
} // end of main

// Function Prototype 

double owedTax(double income)
{
	if (income > 336550)
		return (97653 + ((income - 154800) * .35));
	if (income > 154800)
		return (37675.50 + ((income - 74200) * .33));
	if (income > 74200)
		return (15107.50 + ((income - 30650) * .28));
	if (income > 30650)
		return (4220 + ((income - 30650) * .25));
	if (income > 7550)
		return (755 + ((income - 7550) * .15));
	if (income > 0)
		return (income * .10);

}// end of function

/*
Please enter your personal income.
7500
You owe $750 tax based on your income.
Press any key to continue . . .

*/