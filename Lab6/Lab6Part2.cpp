// Pierre Edward Mendy
// CS 200
/* Lab 6 Part 2 - Write a complete C++ program to read the file message.txt, character by character using the .get() member function. 
Inspect each character read...if the character is not a Lower Case letter, write the character to a file called upper.txt.If the character is a Lower Case letter write the Upper Case version of the character to the same file upper.txt.
You may use the islower(), isupper(), toupper functions in the cctype library. */
// 10/09/2017

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype> 

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	char inChar;

	inFile.open("message.txt");  //open file

	if (inFile.fail())
	{
		cout << "Could not open file!";
		exit(1);
	}

	outFile.open("upper.txt"); //input file

	if (outFile.fail())
	{
		cout << "Could not open file!";
		exit(1);
	}

	char outChar;

	inChar = inFile.get();
	while (!inFile.eof())
	{
		if (isupper(inChar))
			outFile << inChar;
		else
		{
			outChar = toupper(inChar);
			outFile << outChar;
		}
		inChar = inFile.get();
	}

	inFile.close();
	outFile.close();

	return 0;
}