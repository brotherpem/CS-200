// Pierre Edward Mendy
// CS 200
/* Lab 6 Part 1 - Write a complete C++ program to read the integers in the file "numbers.txt" and report on the console/screen how many numbers are in the file followed by the sum of those numbers.  Run this part and confirm that you are getting the correct answers.
Then using the "ios::app" option of the "open" command append at the end of the file the two numbers 224 and 543.  You will actually insert this newer code at the beginning, just prior to the code you have tested as being correct.
The program output that you copy / paste back into your c++ source file will include the count and sum results for these additional 2 values.

*/
// 10/09/2017

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	int num, count = 0, sum = 0;

	/*//part a
	ofstream outFile;
	outFile.open("numbers.txt");//, ios::app

	*/

								//part b
	ofstream outFile;
	outFile.open("number.txt", ios::app); //input file

	if (outFile.fail())
	{
		cout << "Could not open file!" << endl;
		exit(1);
	}

	outFile << " " << 224 << " " << 543;

	outFile.close();

	// Read File 
	ifstream inFile;

	// Open file for reading
	inFile.open("number.txt");   //Open file

	if (inFile.fail())
	{
		cout << "Could not open file!" << endl;
		exit(1);
	}

	while (!inFile.eof())
	{
		inFile >> num;
		count++;
		sum += num;
	}

	inFile.close();

	cout << "The file contained: " << count << " numbers\n";
	cout << "The sum of the numbers = " << sum << endl;

	return 0;
}

/*
part a

The file contained: 10 numbers
The sum of the numbers = 485
Press any key to continue . . .

part b

The file contained: 12 numbers
The sum of the numbers = 1252
Press any key to continue . . .

*/