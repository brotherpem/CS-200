//Pierre Edward Mendy
//Lab 9 hangman
//11/08/2017
#include <iostream>

using namespace::std;


// Function prototypes
void createTemplate(const char secretWord[], char guessTemplate[]);

void updateTemplate(const char secretWord[], char guessLetter, char guessTemplate[]);

bool matchTemplate(const char secretWord[], const char guessTemplate[]);

//---------------------------------------------------------------------------------------------

const int MAX_SIZE = 15;
int main()
{
	const int NUM_LINES = 30;      // Number of lines on the screen

	char secretWord[MAX_SIZE],   // Secret word to be guessed
		guessTemplate[MAX_SIZE];    // Template showing correct guesses
	char guessLetter;                   // Letter guessed

	int numGuesses;                    // Number of letters guessed
	int j;                                     // Counter


	cout << endl << "Enter the secret word: ";   cin >> secretWord;

	// Scroll secrect word off the screen...to hide it
	for (j = 0; j < NUM_LINES; j++) cout << endl;

	// Create an empty guess template.
	createTemplate(secretWord, guessTemplate);

	// Play the game
	//...keep looping(i.e. guessing until secretWord and guessTemplate are identical)

	numGuesses = 0;
	while (!matchTemplate(secretWord, guessTemplate))
	{
		numGuesses++;
		cout << guessTemplate << endl;

		cout << "Guess a letter: ";   cin >> guessLetter;

		// Place CORRECTLY guessed letter in template
		updateTemplate(secretWord, guessLetter, guessTemplate);
	}

	// Display the secret word and the number of guesses.
	cout << guessTemplate << "=" << secretWord << endl;
	cout << "You guessed the word in " << numGuesses << " guesses" << endl;

	return 0;
}


//--------------------------------------------------------------------
// Insert your function implementations here.
//--------------------------------------------------------------------
void createTemplate(const char secretWord[], char guessTemplate[])
{
	int i;
	for (i = 0; secretWord[i] != '\0'; i++)
	{
		guessTemplate[i] = '-'; //create initial guessTemplate with just dashes
	}
	guessTemplate[i] = '\0';
}

void updateTemplate(const char secretWord[], char guessLetter,
	char guessTemplate[])
{

	for (int i = 0; secretWord[i]; i++)
	{
		if (guessLetter == secretWord[i])
		{
			guessTemplate[i] = guessLetter;
		}
	}

}
bool matchTemplate(const char secretWord[], const char guessTemplate[])
{

	for (int i = 0; secretWord[i]; i++)
	{
		if (secretWord[i] != guessTemplate[i])
		{
			return false;

		}
	}
	return true;
}
/*
Enter the secret word: school






























------
Guess a letter: c
-c----
Guess a letter: h
-ch---
Guess a letter: o
-choo-
Guess a letter: l
-chool
Guess a letter: o
-chool
Guess a letter: s
school=school
You guessed the word in 6 guesses
Press any key to continue . . .

*/