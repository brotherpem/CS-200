//Pierre Edward Mendy
//CS 200 Fall Semester
// Lab 2 Part 2

#include <iostream>

using namespace std;

int main()
{
	int WindSpeed = 0;
	int Storm = 0;
	cout << "Enter the Windspeed in miles per hour. ";

	cin >> WindSpeed;

	if (WindSpeed < 74 || WindSpeed > 155)
	{
		cout << "This is not a hurricane. " << endl;
	}
	else if (WindSpeed >= 74 && WindSpeed <= 95)
	{
		Storm = 1;
		cout << "Storm is a stage " << Storm << " Sustained winds of 74 to 95 miles per hour" << endl;
	}

	else if (WindSpeed >= 96 && WindSpeed <= 110)
	{
		Storm = 2;
		cout << "Storm is a stage " << Storm << " Sustained winds of 96 to 110 miles per hour" << endl;
	}

	else if (WindSpeed >= 111 && WindSpeed <= 130)
	{
		Storm = 3;
		cout << "Storm is a stage " << Storm << " Sustained winds of 111 to 130 miles per hour" << endl;
	}

	else if (WindSpeed >= 131 && WindSpeed <= 154)
	{
		Storm = 4;
		cout << "Storm is a stage " << Storm << " Sustained winds of 131 to 155 miles per hour" << endl;
	}

	else if (WindSpeed >= 155)
	{
		Storm = 5;
		cout << "Storm is a stage " << Storm << " Sustained winds of above 155 miles per hour" << endl;
	}



	return 0;
}

/*
Enter the Windspeed in miles per hour. 40
This is not a hurricane.
Press any key to continue . . .


Enter the Windspeed in miles per hour. 74
Sustained winds of 74 to 95 miles per hour
Press any key to continue . . .

Enter the Windspeed in miles per hour. 96
Storm is a stage 2 Sustained winds of 96 to 110 miles per hour
Press any key to continue . . .

Enter the Windspeed in miles per hour. 120
Storm is a stage 3 Sustained winds of 111 to 130 miles per hour
Press any key to continue . . .

Enter the Windspeed in miles per hour. 150
Storm is a stage 4 Sustained winds of 131 to 155 miles per hour
Press any key to continue . . .

Enter the Windspeed in miles per hour. 155
Storm is a stage 5 Sustained winds of above 155 miles per hour
Press any key to continue . . .

Enter the Windspeed in miles per hour. 156
This is not a hurricane.
Press any key to continue . . .


 



*/