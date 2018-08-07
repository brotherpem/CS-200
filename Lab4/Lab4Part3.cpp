//Pierre Edward Mendy
//Lab 4 - Part3  Modify Lab 3's 13-egg problem by using a function...
//10/02/2017
// Egg problem re-visited...this version is rigged...the Tortoise will always win.

#include <iostream>
using namespace std; //correct this line

//Declaration of function

int tortoisePick(int numberEggs, int harePicked);

void main()
{
	bool gameOver = false;            // false means game is NOT over yet
	int numberEggs = 13;
	int player = 1;                         // 1 means Tortoise --- 2 means Hare
	int eggs_selected = 0;           //First tortoise starts so hare picked nothing
	while (!gameOver)
	{
		if (player == 1) //let tortoisePick play for tortoise
			eggs_selected = tortoisePick(numberEggs, eggs_selected);
		else
		{
			cout << "Enter your selection Hare... ";
			cin >> eggs_selected;
		}
		if (eggs_selected >= 1 && eggs_selected <= 3 && eggs_selected <= numberEggs)         // condition - "selected" must stay between 1 and 3 and not exceed "numberEggs"  remaining
		{
			numberEggs = numberEggs - eggs_selected;// subtract the eggs selected from the number of eggs left

			if (numberEggs>0)       // condition - there are still eggs left
				(player ? (player == 1 ? player = 2 : player = 1) : player = 1);// change player to either Hare or Tortoise (USE TERTIARY OPERATOR)

			else                           // ie...no more eggs
			{
				gameOver = true;             //Game-over status changes
			} //END ELSE
		}


		else                              // USER MADE INVALID SELECTION
		{
			cout << "Not a valid egg selection, try again\n";
		}     //END OUTER IF

		cout << " The number of eggs left is " << numberEggs << endl; //Output the number of eggs left
	} // ENDWHILE BODY

	cout << "The winner is " << (player == 1 ? "Tortoise" : "Hare") << endl;// Output the current value of player...ie.the winner...USE TERTIARY OPERATOR


} // ENDMAIN

//function prototype

int tortoisePick(int numberEggs, int harePicked)
{
	if (numberEggs == 13)
	{
		return 1;
	}

	else
	{
		return (4 - harePicked);
	}

}//end of function

/*
The number of eggs left is 12
Enter your selection Hare... 3
The number of eggs left is 9
The number of eggs left is 8
Enter your selection Hare... 2
The number of eggs left is 6
The number of eggs left is 4
Enter your selection Hare... 2
The number of eggs left is 2
The number of eggs left is 0
The winner is Tortoise
Press any key to continue . . .
*/