// Starting Out with CPP.pdf, page 462
// This program demostrates the binarySearch function,
// which performs a binary search on an integer array.

#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);
const int SIZE = 20;

int main() {
  // Array with employee IDs sorted in ascending order.
  int idNums[SIZE] = {
    101, 142, 147, 189, 199, 207, 222,
	234, 289, 296, 310, 319, 388, 394,
	417, 429, 447, 521, 536, 600
  };
  int results;  // To hold the search results
  int empID;    // To hold an emplyee ID

  // Get an employee ID to search for.
  cout << "Enter the employee ID you wish to search for: ";
  cin >> empID;

  // Search for the ID.
  results = binarySearch(idNums, SIZE, empID);

  // If results contains -1 the ID was not found.
  if (results == -1) {
    cout << "That number does not exist in the array.\n";
  }
  else {
    // Otherwise results contains the subscript of
	// the specified employee ID in the array.
	cout << "That ID is found at element " << results;
	cout << " in the array.\n";
  }

  return 0;
}

///////////////////////////////////////////////////////////
// Here is pseudocode for a function that performs a binary
// search on an array:
//   Set first index to 0.
//   Set last index to the last subscript in the array.
//   Set found to false.
//   Set position to -1.
//   While found is not true and first is less than or
//   equal to last
//     Set middle to the subscript halfway array[first]
//     and array[last].
//     If array[middle] equals the desired value
//       Set found to true.
//       Set position to middle.
//     Else If array[middle] is greater than the desired
//     value
//       Set last to middle - 1.
//     Else
//       Set first to middle + 1.
//     End If.
//   End While
//   Return position.
///////////////////////////////////////////////////////////

// ********************************************************
// The binarySearch function performs a binary search on an
// integer array. array, which has a maximum of size 
// elements, is searched for the number stored in value. If
// the number is found, its array subscript is returnd.
// Otherwise, -1 is returned indicating the value was not
// in the array.
// ********************************************************
int binarySearch(const int array[], int size, int value) {
  int first = 0,        // First array element
	  last = size - 1,  // Last array of element
	  middle,           // Midpoint of search
	  position = -1;    // Position of search value
  bool found = false;   // Flag

  while (!found && first <= last) {
    middle = (first + last) / 2;
	if (array[middle] == value) {
	  found = true;
	  position = middle;
	}
	else if (array[middle] > value) {
	  last = middle - 1;
	}
	else {
	  first = middle + 1;
	}
  }

  return position;
}
