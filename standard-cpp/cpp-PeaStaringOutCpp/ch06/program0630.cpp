// program0630.cpp
// This program is a driver for testing
// the showFees function.

#include <iostream>
using namespace std;

void showFees(double, int);

int main()
{
	// Constants for membership rates
	const double ADULT = 40.0;
	const double SENIOR = 30.0;
	const double CHILD = 20.0;

	// Perform a test for adult membership.
	cout << "Testing an adult membership...\n"
		 << "Calling the showFees func with arguments "
		 << ADULT << " and 10.\n";
	showFees(ADULT, 10);

	// Perform a test for senior citizen membership.
	cout << "\nTesting an senior citizen membership...\n"
		 << "Calling the showFees func with arguments "
		 << SENIOR << " and 10.\n";
	showFees(SENIOR, 10);

	// Perform a test for child membership.
	cout << "\nTesting an child membership...\n"
		 << "Calling the showFees func with arguments "
		 << CHILD << " and 10.\n";
	showFees(CHILD, 10);

	return 0;
}

// Definition of function showFees.
// The memberRate parameter holds the monthly membership
// rate and months parameter holds the number of months.
// The function displays the total charges.
void showFees(double memberRate, int months)
{
	cout << "The total charges are $"
		 << (memberRate * months) << endl;
}
