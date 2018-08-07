// Pierre Edward Mendy
//CS200
// Lab 3 - Part 2
// 09/21/2017

#include <iostream>
using namespace::std;

void main()
{
	bool gameOver = false;					  // false means game is NOT over yet
	int numberEggs = 13;
	int player = 1;                         // 1 means Tortoise --- 2 means Hare
	int eggs_selected;
	while (!gameOver)
	{
		cout << "Enter your selection " << ((player == 1) ? "Tortoise" : "Hare") << "... " << endl;
		cin >> eggs_selected;

		if (eggs_selected >= 1 && eggs_selected <= 3 && eggs_selected <= numberEggs)
		{
			numberEggs = (numberEggs - eggs_selected);

			if (numberEggs > 0)
			{
				player = (player == 1) ? 2 : 1;
			}
			else if (numberEggs == 0)
			{
				gameOver = true;
			}

		}

		else if (eggs_selected != 1 && eggs_selected != 2 && eggs_selected != 3 || eggs_selected > numberEggs)
		{
			cout << "Not a valid egg selection, try again\n";
		}


		cout << "The number of eggs left is " << numberEggs << endl;
	}										 // ENDWHILE BODY

	cout << ((player == 1) ? "Tortoise" : "Hare") << " you win the game." << endl;

	return;

}

/*
Enter your selection Tortoise...
2
The number of eggs left is 11
Enter your selection Hare...
3
The number of eggs left is 8
Enter your selection Tortoise...
1
The number of eggs left is 7
Enter your selection Hare...
0
Not a valid egg selection, try again
The number of eggs left is 7
Enter your selection Hare...
1
The number of eggs left is 6
Enter your selection Tortoise...
2
The number of eggs left is 4
Enter your selection Hare...
2
The number of eggs left is 2
Enter your selection Tortoise...
2
The number of eggs left is 0
Tortoise you win the game.
Press any key to continue . . .



Enter your selection Tortoise...
3
The number of eggs left is 10
Enter your selection Hare...
5
Not a valid egg selection, try again
The number of eggs left is 10
Enter your selection Hare...
4
Not a valid egg selection, try again
The number of eggs left is 10
Enter your selection Hare...
3
The number of eggs left is 7
Enter your selection Tortoise...
2
The number of eggs left is 5
Enter your selection Hare...
3
The number of eggs left is 2
Enter your selection Tortoise...
1
The number of eggs left is 1
Enter your selection Hare...
1
The number of eggs left is 0
Hare you win the game.
Press any key to continue . . .

*/