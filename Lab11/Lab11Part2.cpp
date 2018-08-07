//Pierre Edward Mendy 
// Lab 11 - part 2
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

void getData(Worker &staff);
void calculateArray(Worker employee[]);
void calculatePay(Worker &staff);
void displayData(Worker staff);
void loadArray(Worker employee[]);
void displayData(const Worker employee[]);
int workedOvertime(const Worker employee[]);

const int numberOfWorkers =3;

int main()
{
	Worker employee[numberOfWorkers];

	loadArray(employee);
	calculateArray(employee);
	displayData(employee);

	return 0;
}

void getData(Worker &staff)
{
	cout << "Enter the employee's employee number: ";
	cin >> staff.idNumber;
	cout << "Enter hours worked: ";
	cin >> staff.hoursWorked;
	cout << "Enter hourly rate: ";
	cin >> staff.hourlyRate;
	staff.earned = 0;
}

void calculatePay(Worker &staff)
{
	staff.earned = staff.hourlyRate * staff.hoursWorked;
	if (staff.hoursWorked > 40)
	{
		staff.earned += (staff.hoursWorked - 40) * (staff.hourlyRate * .5);
	}
}

void displayData(Worker staff)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Employee ID: " << staff.idNumber << endl << endl;
	cout << "Hours Worked: " << staff.hoursWorked << endl << endl;
	cout << "Hourly Rate: " << staff.hourlyRate << endl << endl;
	cout << "Gross Pay: " << staff.earned << endl << endl;


}

void loadArray(Worker employee[])			//pass array to a function
{
	for (int i = 0; i < numberOfWorkers; i++)
	{
		getData(employee[i]);
	}
}

void calculateArray(Worker employee[])
{
	for (int i = 0; i < numberOfWorkers; i++)
	{
		calculatePay(employee[i]);
	}
}

void displayData(const Worker employee[])
{
	for (int i = 0; i < numberOfWorkers; i++)
	{
		displayData(employee[i]);
	}
	cout << "\n\n " << workedOvertime(employee) << " employees worked overtime " << endl;
}

int workedOvertime(const Worker employee[])
{
	int staffsOverTime = 0;
	for (int i = 0; i < numberOfWorkers; i++)
	{
		if (employee[i].hoursWorked > 40)
		{
			staffsOverTime++;
		}
	}
	return staffsOverTime;
}

/*
Enter the employee's employee number: 1111
Enter hours worked: 40
Enter hourly rate: 18
Enter the employee's employee number: 2222
Enter hours worked: 45
Enter hourly rate: 15
Enter the employee's employee number: 3333
Enter hours worked: 50
Enter hourly rate: 12
Employee ID: 1111

Hours Worked: 40

Hourly Rate: 18.00

Gross Pay: 720.00

Employee ID: 2222

Hours Worked: 45

Hourly Rate: 15.00

Gross Pay: 712.50

Employee ID: 3333

Hours Worked: 50

Hourly Rate: 12.00

Gross Pay: 660.00



2 employees worked overtime
Press any key to continue . . .

*/