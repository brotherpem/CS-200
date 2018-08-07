//Lab 7 Part 5
// Pierre Edward Mendy
//11/02/2017
#include <iostream>
using namespace std;

bool figureGrade(int grade, char letterGrade);

int main()
{
	int grade ;
	char letterGrade = '&';
	

	cout << "Please enter your test score." << endl;
	cin >> grade;

	if (figureGrade(grade, letterGrade) == 1)
	{
		if (grade >= 90)
		{
			char letterGrade = 'A';
			cout << "Your Grade is" << " " << letterGrade << endl;
		}
		else if (grade >= 80)
		{
			char letterGrade = 'B';
			cout << "Your Grade is" << " " << letterGrade << endl;
		}
		else if (grade >= 70)
		{
			char letterGrade = 'C';
			cout << "Your Grade is" << " " << letterGrade << endl;
		}
		else if (grade >= 60)
		{
			char letterGrade = 'D';
			cout << "Your Grade is" << " " << letterGrade << endl;
		}
		else if (grade >= 0)
		{
			char letterGrade = 'F';
			cout << "Your Grade is" << " " << letterGrade << endl;
		}

	}
	else {
		cout << "invalid Entry" << endl;
	}
	return 0;

}

bool figureGrade(int grade, char letterGrade)
{ 
	bool status = true;
	if (grade > 100 || grade < 0)
	{
		
		status = false;
	}
	return status;
}
/*
Please enter your test score.
90
Your Grade is A
Press any key to continue . . .

Please enter your test score.
80
Your Grade is B
Press any key to continue . . .

Please enter your test score.
70
Your Grade is C
Press any key to continue . . .

Please enter your test score.
60
Your Grade is D
Press any key to continue . . .

Please enter your test score.
50
Your Grade is F
Press any key to continue . . .

Please enter your test score.
105
invalid Entry
Press any key to continue . . .
*/