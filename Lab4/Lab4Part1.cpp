//Pierre Edward Mendy
//Lab 4 - Part1   Insert function prototype, calling statement and header...and 2 calculations  Actions for 'Part 1 - Insert function prototype, calling statement and header...and 2 calculations'
//10/02/2017
// Reverse the digits of a number...123 becomes 321 and 721 becomes 127

#include <iostream>
#include <iomanip>
using std::cin; using std::cout; using std::endl;

//int reverse(int number);
int reverseDigits(int n);





int main()
{
	int n;
	cout << "Enter a number between 1 and 9999: "; cin >> n;
	cout << "The number with its digits reversed is: ";

	cout << reverseDigits(n) << endl;           //insert calling statement to FUNCTION

	return 0;                                // 0 indicates successful termination
} // end of main


// reverseDigits returns number obtained by reversing digits of n
/*int reverse(int number)
{
	int reverse = 0;
	int divisor = 1000;
	int multiplier = 1;

	//n, below, is reduced step by step until it becomes less than 9

	while (number > 9)                 //loop until we get a single digit
	{
		if (number >= divisor)       // if n >= current divisor, determine digit
		{
			reverse += number / divisor * multiplier;        // update reversed number with current digit
			number %= divisor;                                      // n stores the remainder of n/divisor
			divisor = divisor / 10;												   //divide divisor by 10
			multiplier = multiplier * 10;												   //multiply multiplier by 10
		}
		else
			divisor /= 10;                                    //divide divisor by 10

	} // ENDWHILE
	reverse += number * multiplier;                     //reverse gets newest digit tacked on
	return reverse;                                     // return reversed number
} */


int reverseDigits(int n)
{
	int reverse = 0;
	int remainder;

	// n, below is reduced step by step until it becomes 0

	while (n != 0)				// loop until false
	{

		remainder = n % 10;		// get the right digit of the number n			
		reverse = reverse * 10 + remainder; // move the new number one digit left and 

		n /= 10;						// n is decreased 10 fold
	} // endwhile
	return reverse;				// return reversed number 

	
}// end function




/*
Enter a number between 1 and 9999: 4567
The number with its digits reversed is: 7654
Press any key to continue . . .
*/