#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	// Current date/time based on current system
	time_t now = time(0);

	// Convert now to tm struct for local timezone
	tm* localtm = localtime(&now);
	cout << "The local date and time is: " << asctime(localtm) << endl;

	return 0;
}
