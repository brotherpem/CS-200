//Lab 7 Part 4
// Pierre Edward Mendy
//11/02/2017
#include <iostream>
using namespace::std;

//  Function prototypes

void displayBox(int length);
void displayBox(int length, char fillChar);
void displayBox(int width, int height);
void displayBox(int width, int height, char fillChar);

//--------------------------------------------------------------------

int main()
{
	int boxLength,   // Input box dimensions
		boxWidth,
		boxHeight;

	char boxFill;    // Input fill character

					 // Test the displayBox(length) and displayBox(length,fillChar) functions.
	cout << endl << "Enter the length of a side: ";    cin >> boxLength;
	displayBox(boxLength);
	cout << endl << "Enter the fill character: ";    cin >> boxFill;
	displayBox(boxLength, boxFill);

	// Test the displayBox(width,height) and displayBox(width,height,fillChar) functions.
	cout << endl << "Enter the width and height of the box: ";    cin >> boxWidth >> boxHeight;
	displayBox(boxWidth, boxHeight);
	cout << endl << "Enter the fill character: ";    cin >> boxFill;
	displayBox(boxWidth, boxHeight, boxFill);

	return 0;
}

//--------------------------------------------------------------------
void displayBox(int length)
{
	displayBox(length, ' ');				 //  call the 2 argument function, int and char
}


void displayBox(int length, char fillChar)
{
	displayBox(length, length, fillChar);		//  call the 3 argument function
}


void displayBox(int width, int height)
{
	displayBox(width, height, ' ');				 // call the 3 argument function
}

void displayBox(int width, int height, char fillChar)
{
	/*for (int a = 0; a < width; a++)
	{
		cout << "X";
	}										// using nested loops, write this function

	cout << endl;

	for (int b = 0; b < height - 2; b++)
	{
		cout << "X";

		for (int c = 0; c < width - 2; c++)
		{
			cout << fillChar;
		}
		cout << "X";
		cout << endl;
	}

	for (int a = 0; a < width; a++)
	{
		cout << "X";
	} */

	for (int a = 0; a < height; a++)
	{
	

		for (int b = 0; b < width; b++)
		{


			//for (int c = 0; c < width - 2; c++)
			if (a == 0 || b == 0 || a == height - 1 || b == width - 1)

			{

				cout << "X";

			}

			else

			{
				cout << fillChar;
			}
		}

		cout << endl;
	}

}

/*

Enter the length of a side: 5
XXXXX
X   X
X   X
X   X
XXXXX

Enter the fill character: a
XXXXX
XaaaX
XaaaX
XaaaX
XXXXX

Enter the width and height of the box: 5
7
XXXXX
X   X
X   X
X   X
X   X
X   X
XXXXX

Enter the fill character: b
XXXXX
XbbbX
XbbbX
XbbbX
XbbbX
XbbbX
XXXXX
Press any key to continue . . .
*/