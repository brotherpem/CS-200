// Pierre Edward Mendy
// Lab5
// 10/23/2017

#include <iostream>
using namespace::std;


class measurement
{
public:
	// Constructors
	measurement(void);

	measurement(int y, int f, int i);

	// Mutator Functions
	void setYards(int y);
	void setFeet(int f);
	void setInches(int i);

	// Accessor Functions
	int getYards(void);
	int getFeet(void);
	int getInches(void);

	// Other Functions

	void advanceOneInch();
		// increase the inches amount by 1
		// NOTE: you may have to advance the feet
		// you may have to advance the yards
	
	void output(ostream &);
	
	void zeroOut(void); // set yards, feet and inches to 0
	

private:

	int yards;
	int feet;
	int inches;

};

void main()
{
	measurement stackOfLumber(3, 2, 5);

	for (int i = 1; i <= 200; i++)
	{
		stackOfLumber.advanceOneInch();
		stackOfLumber.output(cout);
	}

	stackOfLumber.zeroOut();
	stackOfLumber.output(cout);

	stackOfLumber.setYards(6);
	stackOfLumber.setFeet(2);
	stackOfLumber.setInches(3);
	cout << stackOfLumber.getYards() << ' '
		<< stackOfLumber.getFeet() << ' '
		<< stackOfLumber.getInches() << endl;

	return;
}


// WRITE THE measurement FUNCTIONS BELOW

measurement::measurement(void)
{
	yards = 0;
	feet = 0;
	inches = 0;

}

measurement::measurement(int y, int f, int i)
{
	yards = y;
	feet = f;
	inches = i;


}

void measurement::setYards(int y)
{
	yards = y;
}
void measurement::setFeet(int f)
{
	feet = f;


}

void measurement::setInches(int i)
{
	inches = i;
}

// Accessor Functions
int measurement::getYards(void)
{
	return yards;
}

int measurement::getFeet(void)
{
	return feet;
}

int measurement::getInches(void)
{
	return inches;
}

void measurement::advanceOneInch()
// increase the inches amount by 1
// NOTE: you may have to advance the feet
// you may have to advance the yards
{
	inches++;
	if (inches == 12)
	{
		feet++;
		inches = 0;
		if (feet == 3)
		{
			yards++;
			feet = 0;
		}
	}
}

void measurement::output(ostream & out)
{
	out << "yards: " << yards << endl;
	out << "feet: " << feet << endl;
	out << "inches: " << inches << endl;
	out << endl;

}
void measurement::zeroOut(void) // set yards, feet and inches to 0
{

	yards = 0;
	feet = 0;
	inches = 0;
}

/*
	yards: 3
	feet : 2
	inches : 6

	yards : 3
	feet : 2
	inches : 7

	yards : 3
	feet : 2
	inches : 8

	yards : 3
	feet : 2
	inches : 9

	yards : 3
	feet : 2
	inches : 10

	yards : 3
	feet : 2
	inches : 11

	yards : 4
	feet : 0
	inches : 0

	yards : 4
	feet : 0
	inches : 1

	yards : 4
	feet : 0
	inches : 2

	yards : 4
	feet : 0
	inches : 3

	yards : 4
	feet : 0
	inches : 4

	yards : 4
	feet : 0
	inches : 5

	yards : 4
	feet : 0
	inches : 6

	yards : 4
	feet : 0
	inches : 7

	yards : 4
	feet : 0
	inches : 8

	yards : 4
	feet : 0
	inches : 9

	yards : 4
	feet : 0
	inches : 10

	yards : 4
	feet : 0
	inches : 11

	yards : 4
	feet : 1
	inches : 0

	yards : 4
	feet : 1
	inches : 1

	yards : 4
	feet : 1
	inches : 2

	yards : 4
	feet : 1
	inches : 3

	yards : 4
	feet : 1
	inches : 4

	yards : 4
	feet : 1
	inches : 5

	yards : 4
	feet : 1
	inches : 6

	yards : 4
	feet : 1
	inches : 7

	yards : 4
	feet : 1
	inches : 8

	yards : 4
	feet : 1
	inches : 9

	yards : 4
	feet : 1
	inches : 10

	yards : 4
	feet : 1
	inches : 11

	yards : 4
	feet : 2
	inches : 0

	yards : 4
	feet : 2
	inches : 1

	yards : 4
	feet : 2
	inches : 2

	yards : 4
	feet : 2
	inches : 3

	yards : 4
	feet : 2
	inches : 4

	yards : 4
	feet : 2
	inches : 5

	yards : 4
	feet : 2
	inches : 6

	yards : 4
	feet : 2
	inches : 7

	yards : 4
	feet : 2
	inches : 8

	yards : 4
	feet : 2
	inches : 9

	yards : 4
	feet : 2
	inches : 10

	yards : 4
	feet : 2
	inches : 11

	yards : 5
	feet : 0
	inches : 0

	yards : 5
	feet : 0
	inches : 1

	yards : 5
	feet : 0
	inches : 2

	yards : 5
	feet : 0
	inches : 3

	yards : 5
	feet : 0
	inches : 4

	yards : 5
	feet : 0
	inches : 5

	yards : 5
	feet : 0
	inches : 6

	yards : 5
	feet : 0
	inches : 7

	yards : 5
	feet : 0
	inches : 8

	yards : 5
	feet : 0
	inches : 9

	yards : 5
	feet : 0
	inches : 10

	yards : 5
	feet : 0
	inches : 11

	yards : 5
	feet : 1
	inches : 0

	yards : 5
	feet : 1
	inches : 1

	yards : 5
	feet : 1
	inches : 2

	yards : 5
	feet : 1
	inches : 3

	yards : 5
	feet : 1
	inches : 4

	yards : 5
	feet : 1
	inches : 5

	yards : 5
	feet : 1
	inches : 6

	yards : 5
	feet : 1
	inches : 7

	yards : 5
	feet : 1
	inches : 8

	yards : 5
	feet : 1
	inches : 9

	yards : 5
	feet : 1
	inches : 10

	yards : 5
	feet : 1
	inches : 11

	yards : 5
	feet : 2
	inches : 0

	yards : 5
	feet : 2
	inches : 1

	yards : 5
	feet : 2
	inches : 2

	yards : 5
	feet : 2
	inches : 3

	yards : 5
	feet : 2
	inches : 4

	yards : 5
	feet : 2
	inches : 5

	yards : 5
	feet : 2
	inches : 6

	yards : 5
	feet : 2
	inches : 7

	yards : 5
	feet : 2
	inches : 8

	yards : 5
	feet : 2
	inches : 9

	yards : 5
	feet : 2
	inches : 10

	yards : 5
	feet : 2
	inches : 11

	yards : 6
	feet : 0
	inches : 0

	yards : 6
	feet : 0
	inches : 1

	yards : 6
	feet : 0
	inches : 2

	yards : 6
	feet : 0
	inches : 3

	yards : 6
	feet : 0
	inches : 4

	yards : 6
	feet : 0
	inches : 5

	yards : 6
	feet : 0
	inches : 6

	yards : 6
	feet : 0
	inches : 7

	yards : 6
	feet : 0
	inches : 8

	yards : 6
	feet : 0
	inches : 9

	yards : 6
	feet : 0
	inches : 10

	yards : 6
	feet : 0
	inches : 11

	yards : 6
	feet : 1
	inches : 0

	yards : 6
	feet : 1
	inches : 1

	yards : 6
	feet : 1
	inches : 2

	yards : 6
	feet : 1
	inches : 3

	yards : 6
	feet : 1
	inches : 4

	yards : 6
	feet : 1
	inches : 5

	yards : 6
	feet : 1
	inches : 6

	yards : 6
	feet : 1
	inches : 7

	yards : 6
	feet : 1
	inches : 8

	yards : 6
	feet : 1
	inches : 9

	yards : 6
	feet : 1
	inches : 10

	yards : 6
	feet : 1
	inches : 11

	yards : 6
	feet : 2
	inches : 0

	yards : 6
	feet : 2
	inches : 1

	yards : 6
	feet : 2
	inches : 2

	yards : 6
	feet : 2
	inches : 3

	yards : 6
	feet : 2
	inches : 4

	yards : 6
	feet : 2
	inches : 5

	yards : 6
	feet : 2
	inches : 6

	yards : 6
	feet : 2
	inches : 7

	yards : 6
	feet : 2
	inches : 8

	yards : 6
	feet : 2
	inches : 9

	yards : 6
	feet : 2
	inches : 10

	yards : 6
	feet : 2
	inches : 11

	yards : 7
	feet : 0
	inches : 0

	yards : 7
	feet : 0
	inches : 1

	yards : 7
	feet : 0
	inches : 2

	yards : 7
	feet : 0
	inches : 3

	yards : 7
	feet : 0
	inches : 4

	yards : 7
	feet : 0
	inches : 5

	yards : 7
	feet : 0
	inches : 6

	yards : 7
	feet : 0
	inches : 7

	yards : 7
	feet : 0
	inches : 8

	yards : 7
	feet : 0
	inches : 9

	yards : 7
	feet : 0
	inches : 10

	yards : 7
	feet : 0
	inches : 11

	yards : 7
	feet : 1
	inches : 0

	yards : 7
	feet : 1
	inches : 1

	yards : 7
	feet : 1
	inches : 2

	yards : 7
	feet : 1
	inches : 3

	yards : 7
	feet : 1
	inches : 4

	yards : 7
	feet : 1
	inches : 5

	yards : 7
	feet : 1
	inches : 6

	yards : 7
	feet : 1
	inches : 7

	yards : 7
	feet : 1
	inches : 8

	yards : 7
	feet : 1
	inches : 9

	yards : 7
	feet : 1
	inches : 10

	yards : 7
	feet : 1
	inches : 11

	yards : 7
	feet : 2
	inches : 0

	yards : 7
	feet : 2
	inches : 1

	yards : 7
	feet : 2
	inches : 2

	yards : 7
	feet : 2
	inches : 3

	yards : 7
	feet : 2
	inches : 4

	yards : 7
	feet : 2
	inches : 5

	yards : 7
	feet : 2
	inches : 6

	yards : 7
	feet : 2
	inches : 7

	yards : 7
	feet : 2
	inches : 8

	yards : 7
	feet : 2
	inches : 9

	yards : 7
	feet : 2
	inches : 10

	yards : 7
	feet : 2
	inches : 11

	yards : 8
	feet : 0
	inches : 0

	yards : 8
	feet : 0
	inches : 1

	yards : 8
	feet : 0
	inches : 2

	yards : 8
	feet : 0
	inches : 3

	yards : 8
	feet : 0
	inches : 4

	yards : 8
	feet : 0
	inches : 5

	yards : 8
	feet : 0
	inches : 6

	yards : 8
	feet : 0
	inches : 7

	yards : 8
	feet : 0
	inches : 8

	yards : 8
	feet : 0
	inches : 9

	yards : 8
	feet : 0
	inches : 10

	yards : 8
	feet : 0
	inches : 11

	yards : 8
	feet : 1
	inches : 0

	yards : 8
	feet : 1
	inches : 1

	yards : 8
	feet : 1
	inches : 2

	yards : 8
	feet : 1
	inches : 3

	yards : 8
	feet : 1
	inches : 4

	yards : 8
	feet : 1
	inches : 5

	yards : 8
	feet : 1
	inches : 6

	yards : 8
	feet : 1
	inches : 7

	yards : 8
	feet : 1
	inches : 8

	yards : 8
	feet : 1
	inches : 9

	yards : 8
	feet : 1
	inches : 10

	yards : 8
	feet : 1
	inches : 11

	yards : 8
	feet : 2
	inches : 0

	yards : 8
	feet : 2
	inches : 1

	yards : 8
	feet : 2
	inches : 2

	yards : 8
	feet : 2
	inches : 3

	yards : 8
	feet : 2
	inches : 4

	yards : 8
	feet : 2
	inches : 5

	yards : 8
	feet : 2
	inches : 6

	yards : 8
	feet : 2
	inches : 7

	yards : 8
	feet : 2
	inches : 8

	yards : 8
	feet : 2
	inches : 9

	yards : 8
	feet : 2
	inches : 10

	yards : 8
	feet : 2
	inches : 11

	yards : 9
	feet : 0
	inches : 0

	yards : 9
	feet : 0
	inches : 1

	yards : 9
	feet : 0
	inches : 2

	yards : 9
	feet : 0
	inches : 3

	yards : 9
	feet : 0
	inches : 4

	yards : 9
	feet : 0
	inches : 5

	yards : 9
	feet : 0
	inches : 6

	yards : 9
	feet : 0
	inches : 7

	yards : 9
	feet : 0
	inches : 8

	yards : 9
	feet : 0
	inches : 9

	yards : 9
	feet : 0
	inches : 10

	yards : 9
	feet : 0
	inches : 11

	yards : 9
	feet : 1
	inches : 0

	yards : 9
	feet : 1
	inches : 1

	yards : 0
	feet : 0
	inches : 0

	6 2 3
	Press any key to continue . . .
*/