//Pierre Edward Mendy
//CS 200 Fall Semester
// Lab 1 Part 1
#include <iostream>		// allows program to perform input and output

//Instead of using the std namespace you can pick out specific ones as follows:
using std::cout;          // Lets use cout from the standard namespaces
using std::endl;         // Lets use endl from the standard namespace
using std::cin;          // Lets use cin from the standard namespace

int main()
{
	//Declare two integers number1 and number2 
	int number1, number2;

	cout << "Enter two integers: "; // Clue the user in on what is wanted
	cin >> number1 >> number2;		//Write an input statement

									// using the modulus operator, write the condition first number is evenly divisible by the second number

									//for example is 12 divisible by 2 and 3 and 4 and 6 without a remainder?
	if (number1 % number2 == 0)
		cout << number1 << " is a multiple of " << number2 << endl;

	if (number1 % number2 != 0)                            //complete this condition which is the opposite of the above IF
		cout << number1 << " is not a multiple of " << number2 << endl;

	return 0;                              //return is only needed if we  use int main vs void main

} // end main

/*
Enter two integers: 6
3
6 is a multiple of 3
Press any key to continue . . .


Enter two integers: 5
3
5 is not a multiple of 3
Press any key to continue . . .

*/