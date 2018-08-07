// Find Pythagorean triples
// Pierre Edward Mendy
//CS200
// Lab 3 - Part 3
// 09/21/2017

#include <iostream>
using std::cout; using std::endl;

int main()
{

	const int LIMIT = 5;                         //for your second run change this to 500 IF YOU DARE!
	//const int LIMIT = 100;                         //for your second run change this to 500 IF YOU DARE!
	int count = 0;                                 // count # of triples found
	long int hypotenuseSquared;            // hypotenuse squared
	long int sidesSquared;                     // sum of squares of sides





	cout << "Side 1\tSide 2\tSide3" << endl;

	for (int side1 = 1; side1 <= LIMIT; side1++)                 // Write a for-header for side1 ranging from 1 to LIMIT
	{


		for (int side2 = side1; side2 <= LIMIT; side2++)                 // Write a for-header for side2 ranging from side1 to LIMIT
		{


			for (int hypotenuse = side2; hypotenuse <= LIMIT; hypotenuse++)			// Write a for-header or hypotenuse ranging from side2 to LIMIT
			{



				hypotenuseSquared = (hypotenuse * hypotenuse);														// calculate hypotenuseSquared to be the hypotenuse squared
				sidesSquared = (side1 * side1) + (side2*side2);														// calculate the sidesSquared to be the sum of each side squared

				if (hypotenuseSquared == sidesSquared)          //ie. is a Pythagorean triple
				{
					cout << side1 << '\t' << side2 << '\t' << hypotenuse << '\n';
					count++;                                                //count the triple
				}  //ENDIF
			}  //ENDinnerMOSTfor
		}  //ENDmiddleMOSTfor
	}  //ENDouterMOSTfor

	   //if LIMIT is 5......there will be 5*5*5=125 outputlines

	   //if LIMIT is 500...there will be 500*500*500=125,000,000 outputlines

	cout << "A total of " << count << " triples were found." << endl;
	return 0;
} // end main

/*
Side 1  Side 2  Side3
3       4       5
A total of 1 triples were found.
Press any key to continue . . .

Side 1  Side 2  Side3
3       4       5
5       12      13
6       8       10
7       24      25
8       15      17
9       12      15
9       40      41
10      24      26
11      60      61
12      16      20
12      35      37
13      84      85
14      48      50
15      20      25
15      36      39
16      30      34
16      63      65
18      24      30
18      80      82
20      21      29
20      48      52
21      28      35
21      72      75
24      32      40
24      45      51
24      70      74
25      60      65
27      36      45
28      45      53
28      96      100
30      40      50
30      72      78
32      60      68
33      44      55
33      56      65
35      84      91
36      48      60
36      77      85
39      52      65
39      80      89
40      42      58
40      75      85
42      56      70
45      60      75
48      55      73
48      64      80
51      68      85
54      72      90
57      76      95
60      63      87
60      80      100
65      72      97
A total of 52 triples were found.
Press any key to continue . . .*/