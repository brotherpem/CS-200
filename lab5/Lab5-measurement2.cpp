#include <iostream>
using namespace::std;


class measurement
{
public:
	// Constructors
	measurement(void);
	measurement(int y, int f, int i);


	// Mutator Functions
	void setYards(int);
	void setFeet(int);
	void setInches(int);

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