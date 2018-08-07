//User will enter a series of numbers followed by the number 9999 which is the SENTINEL indicating end of data input
//These numbers will be summed (i.e. accumulated) and an average is computed
// Pierre Edward Mendy
//CS200
// Lab 3 - Part1
// 09/21/2017

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int value;
	int count = 0;
	int total;

	cout << "Enter 1 integer ( OR the SENTINEL 9999 ):" << endl;
	cin >> value;
	total = 0;

	while (value != 9999)				     	  //Provide the statement to Start looping...the loop will stop when user enters 9999

	{
		total = total + value;					 // Add value to total

		count = count + 1;						 // Increment the counter

		cin >> value;                             // Input next value before looping back


	}											  // END LOOP

												  // This following code executes only after loop has ended...ie user enters SENTINEL value 9999
												  // ...or if the user enters and "empty list" i.e.  ONLY 9999 
	if (count)								//Is count an actual number?
		cout << "\nThe average is: " << double(total) / double(count) << endl;
	else
		cout << "\nNo values were entered." << endl;

	return 0;
}												// END MAIN

/*

Enter 1 integer ( OR the SENTINEL 9999 ):
50
600
7
455
123
9999

The average is: 247
Press any key to continue . . .
*/