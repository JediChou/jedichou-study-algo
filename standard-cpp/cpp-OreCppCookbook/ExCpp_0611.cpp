// Example 6-11: Save pointer to a set.
#include <iostream>
#include <set>
#include <string>
#include <functional>
#include <cassert>

using namespace std;

struct strPtrLess {
	bool operator() (
		const string* p1,
		const string* p2
	) {
		assert (p1 && p2);
		return (*p1 < *p2);
	}
};

int main() {
	set<string*, strPtrLess> setStrPtr;

	string s1 = "Tom";
	string s2 = "Dick";
	string s3 = "Harry";

	setStrPtr.insert(&s1);
	setStrPtr.insert(&s2);
	setStrPtr.insert(&s3);

	for(set<string*, strPtrLess>::const_iterator 
		p = setStrPtr.begin();
		p != setStrPtr.end(); ++p)
		cout << *p << endl;

	return 0;
}
