// Test program for the keyToTones function.
//Pierre Edward Mendy 
// Lab 11 - PhoneTones
//CS-200 - Prof. Don
//12/07/2017

#include <iostream>
using namespace::std;

struct phoneTones
{
	int rowTone,           // Frequencies of the tones generated by a key press
		colTone;
};

phoneTones keyToTones(char key);
void main()
{
	char inputKey;                 // Input ONE key value
	phoneTones keyFreqs;    // keyFreqs is a variable holding two tones

							// Read in a series of keys and output the corresponding tones.
	for (int i = 1; i <= 12; i++)
	{
		cout << endl << "Enter key pressed (0-9, *, or #): ";
		cin >> inputKey;
		keyFreqs = keyToTones(inputKey);    //call the structure function returning a keyFreqs structure
		cout << "Tones produced at "
			<< keyFreqs.rowTone << " and "
			<< keyFreqs.colTone << " Hz" << endl;
	}
}

//--------------------------------------------------------------------
// Insert your keyToTones function here.
//--------------------------------------------------------------------

phoneTones keyToTones(char key)
{
	phoneTones Ringtone;

	switch (key)
	{
	case'1':
	case'2':
	case'3': Ringtone.rowTone = 697; break;
	case'4':
	case'5':
	case'6': Ringtone.rowTone = 770; break;
	case'7':
	case'8':
	case'9': Ringtone.rowTone = 852; break;
	case'*':
	case'0':
	case'#': Ringtone.rowTone = 941; break;
	default:;
	}

	switch (key)
	{
	case'1':
	case'4':
	case'7':
	case'*': Ringtone.colTone = 1209; break;
	case'2':
	case'5':
	case'8':
	case'0': Ringtone.colTone = 1336; break;
	case'3':
	case'6':
	case'9':
	case'#': Ringtone.colTone = 1447; break;
	default:;
	}
	return Ringtone;

}
/*

Enter key pressed (0-9, *, or #): 1
Tones produced at 697 and 1209 Hz

Enter key pressed (0-9, *, or #): 2
Tones produced at 697 and 1336 Hz

Enter key pressed (0-9, *, or #): 3
Tones produced at 697 and 1447 Hz

Enter key pressed (0-9, *, or #): 4
Tones produced at 770 and 1209 Hz

Enter key pressed (0-9, *, or #): 5
Tones produced at 770 and 1336 Hz

Enter key pressed (0-9, *, or #): 6
Tones produced at 770 and 1447 Hz

Enter key pressed (0-9, *, or #): 7
Tones produced at 852 and 1209 Hz

Enter key pressed (0-9, *, or #): 8
Tones produced at 852 and 1336 Hz

Enter key pressed (0-9, *, or #): 9
Tones produced at 852 and 1447 Hz

Enter key pressed (0-9, *, or #): *
Tones produced at 941 and 1209 Hz

Enter key pressed (0-9, *, or #): #
Tones produced at 941 and 1447 Hz

Enter key pressed (0-9, *, or #): 10
Tones produced at 697 and 1209 Hz
Press any key to continue . . .
*/