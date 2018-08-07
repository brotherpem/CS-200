//Pierre Edward Mendy 
// Lab 11 - part 1
//CS-200 - Prof. Don
//12/07/2017
#include <iostream>
#include <iomanip>

using namespace std;

struct Worker
{
	int idNumber;
	int hoursWorked;
	double hourlyRate;
	double earned;
};

void getData(Worker &Pierre);
void calculatePay(Worker &staff);
void displayData(Worker Pierre);

int main()
{
	Worker astaff;
	getData(astaff);
	calculatePay(astaff);
	displayData(astaff);

	return 0;
}

void getData(Worker &Pierre)
{
	cout << "Enter the employee's employee number: ";
	cin >> Pierre.idNumber;
	cout << "Enter hours worked: ";
	cin >> Pierre.hoursWorked;
	cout << "Enter hourly rate: ";
	cin >> Pierre.hourlyRate;
	Pierre.earned = 0;

}

void calculatePay(Worker &staff)
{
	staff.earned = staff.hourlyRate * staff.hoursWorked;
	if (staff.hoursWorked > 40)
	{
		staff.earned += (staff.hoursWorked - 40) * (staff.hourlyRate * .5);
	}
}

void displayData(Worker Pierre)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Pierre's ID: " << Pierre.idNumber << endl;
	cout << "Pierre's Hours Worked: " << Pierre.hoursWorked << endl;
	cout << "Pierre's Hourly Rate: " << Pierre.hourlyRate << endl;
	cout << "Pierre's Gross Pay: " << Pierre.earned << endl;


}

/*
Enter the employee's employee number: 1111
Enter hours worked: 58
Enter hourly rate: 12
Pierre's ID: 1111
Pierre's Hours Worked: 58
Pierre's Hourly Rate: 12.00
Pierre's Gross Pay: 804.00
Press any key to continue . . .
*/