//Pierre Edward Mendy
//CS 200 Fall Semester
// Lab 1 Part 2
#include <iostream> // allows program to perform input and output

using std::cout; using std::endl; using std::cin; // We can put these on one line

int main()
{
	int number1; int number2; int number3; int smallest; int largest;
	//change the above multiple int's to just one int declaration?

	cout << "Input three different integers: ";    // prompt to let user know what you want to be entered as input values
	cin >> number1 >> number2 >> number3;                         // finish this input statement

	largest = number1;         // arbitrarily assume first integer is largest

	if (number2 > largest)		/* Write a statement to determine if number2 is greater than largest. If so assign number2 to largest */
		largest = number2;

	if (number3 > largest)		/* Write a statement to determine if number3 is greater than largest. If so assign number3 to largest */
		largest = number3;



	smallest = number1;      // arbitrarily assume first integer is smallest

	if (number2 < smallest)
		smallest = number2;		/* Write a statement to determine if number2 is less than smallest. If so assign number2 to smallest */

	if (number3 < smallest)		 /* Write a statement to determine if number3 is less than smallest. If so assign number3 to smallest */
		smallest = number3;

	cout << endl << "sum = " << number1 + number2 + number3 << endl;	// Write an output statement that prints the sum, average, product, largest and smallest
	cout << endl << "average = " << (number1 + number2 + number3) / 3 << endl;
	cout << endl << "product = " << (number1 * number2 * number3) << endl;
	cout << endl << "largest = " << largest << endl;
	cout << endl << "smallest = " << smallest << endl;
	return 0; // return a zero because we used "int main" vs "void main"

} // end main

/*
Input three different integers: 3 2 1

sum = 6
average = 2
product = 6
largest = 3
smallest = 1
Press any key to continue . . .
*/