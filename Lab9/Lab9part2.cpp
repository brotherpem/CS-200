//Pierre Edward Mendy
//Lab 9 part2
//11/08/2017
#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 15;     // Max word size of word, 14 chars plus  '\0'
void reverse(char word[]);    // function prototype

void main()
{

	char word[MAX_SIZE];
	cout << endl << "Enter a word : ";  cin >> word;
	cout << "You entered the word " << word << endl;
	reverse(word);
	cout << "The word in reverse order is " << word << endl;

}//END MAIN

/*void reverse(char word[])
{
	// you cannot have any local array variables inside this function

	int index = 0;
	int length = 0;

	char temp = '\0';

	// get length of char array
	while (word[index] != '\0')
	{
		length++;
		index++;
	}

	int reverse = length - 1;

	// we are going front -> reverse AND reverse -> front simutaneously!
	for (index = 0; index < reverse; index++, reverse--)
	{
		// Store a character temporarily.
		temp = word[index];

		// put next backward char in front
		word[index] = word[reverse];

		// put the next forward char to the back
		word[reverse] = temp;
	}

}*/

void reverse(char word[])
{
	int nullPos;
	// Find end of string
	for (nullPos = 0; word[nullPos] != '\0'; nullPos++) {

		int left = 0;
		int right = nullPos - 1;
		char temp;

		while (!(left >= right)) {
			temp = word[left];           // Save left character for swapping left and right
			word[left++] = word[right];  // Replace left with right and then move left array by adding one to left 
			word[right--] = temp;        // Replace right with left (temp) and then move right array by subtract one from right
		}
	}
}

/*
Enter a word : school
You entered the word school
The word in reverse order is loohcs
Press any key to continue . . .
*/

/*

Enter a word : school
You entered the word school
The word in reverse order is ohscol
Press any key to continue . . .
*/