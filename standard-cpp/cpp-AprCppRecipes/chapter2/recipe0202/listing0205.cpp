// Listing 2-5. Constructing vector Objects

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	using MyVector = vector<int>;

	MyVector vectorA(1);
	cout << vectorA.size() << " " << vectorA[0] << endl;

	MyVector vectorB(1, 10);
	cout << vectorA.size() << " " << vectorB[0] << endl;

	return 0;
}
