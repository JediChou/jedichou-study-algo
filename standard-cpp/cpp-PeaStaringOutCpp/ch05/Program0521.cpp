// Starting Out with CPP.pdf, page 278
// This program reads data from a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream output;   // File stream object
  int numberOfDays;  // Number of days of sales
  double sales;      // Sales amount for a day

  // Get the number of days.
  cout << "For how many days do you have sales? ";
  cin >> numberOfDays;

  // Open a file named Sales.txt.
  output.open("Sales.txt");

  // Get the sales for each day and write it
  // to the file.
  for (int count = 1; count <= numberOfDays; count++) {
    // Get the sales for a day.
	cout << "Enter the sales for day "
		 << count << ": ";
	cin >> sales;

	// Write the sales to the file.
	output << sales << endl;
  }

  // Close the file.
  output.close();
  cout << "Data written to Sales.txt\n";
  return 0;
}
