//Pierre Edward Mendy
//Lab 8 part 1
//11/08/2017
#include <iostream> 
using std::cout;   using std::ios;
#include <iomanip> 
using std::setw;  using std::setprecision;  using std::fixed;  using std::showpoint;
#include <cstdlib> 
using std::rand;  using std::srand;
#include <ctime>  using std::time;

int main()
{
	const long ROLLS = 36000;
	const int SIZE = 13;

	// The array "expected" contains counts for the expected number of times each sum occurs in 36000 rolls of the dice 
	int expected[SIZE] = { 0,0,1,2,3,4,5,6,4,3,2,1 };

	// Write the declaration of array "expected" here.
	// Initialize the "expected" array here to contain the expected values.  Use  SIZE for the number of elements 
	// For example ... expected[0] and expected[1] will have the value of 0  since there are no ways for two dice to add up to 0 or 1
	// ... expected[2] will hold 1,    1 + 1 gives 2
	//  ...expected[3] will hold 2,    1 + 2 and 2 + 1 both gives 3
	//  ...expected[4] will hold 3,    1 + 3 and 3 + 1 and 2 + 2 all gives 4


	int x;      // first die
	int y;      // second die

				// Write declaration for array sum here. Initialize all  elements to zero. Use SIZE for the number of elements 
	int sum[SIZE];

	// see textbook for initializing arrays at compile time
	for (int i = 0; i < SIZE; i++)
		sum[i] = 0;

	srand(time(0));

	// roll dice 36,000 times
	/* Write a for loop that iterates ROLLS times. Randomly  generate values x die and y die
	and increment the appropriate counter in array sum that  corresponds to the sum of x and y */
	for (int i = 1; i <= ROLLS; i++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		sum[x + y]++;
	}
	cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
		<< "Expected" << setw(10) << "Actual\n" << fixed << showpoint;

	// display results of rolling dice
	for (int j = 2; j < SIZE; j++)
		cout << setw(10) << j
		<< setw(10) << sum[j]
		<< setprecision(3) << setw(9) << 100.0 * expected[j] / 36 << "%"
		<< setprecision(3) << setw(9) << 100.0 * sum[j] / 36000
		<< "%\n";

	return 0;               // indicates successful completion
} // end main

/*
Sum     Total  Expected   Actual
2      1003    2.778%    2.786%
3      2015    5.556%    5.597%
4      3053    8.333%    8.481%
5      3994   11.111%   11.094%
6      4931   13.889%   13.697%
7      6008   16.667%   16.689%
8      4965   11.111%   13.792%
9      4053    8.333%   11.258%
10      3056    5.556%    8.489%
11      1929    2.778%    5.358%
12       993    0.000%    2.758%
Press any key to continue . . .

*/