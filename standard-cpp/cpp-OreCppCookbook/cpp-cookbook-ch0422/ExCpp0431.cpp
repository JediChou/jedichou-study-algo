// File name: ExCpp0431.cpp
// From OReilly C++ Cookbook

#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

typedef map<string, string> StrStrMap;

// Class for holding text fields
class TextAutoField {
public:
	 TextAutoField(StrStrMap* const p) : pDict_(p) {}
	~TextAutoField() {}

	void append(char c);
	void getText(string& s) {s = buf_;}

private:
	TextAutoField();
	string buf_;
	StrStrMap* const pDict_;
};


// Append with autocorrect
void TextAutoField::append(char c) {
	if ( (isspace(c) || ispunct(c) ) &&
		 buf_.length() > 0 &&
		 !isspace(buf_[buf_.length()-1]) ) {
		string::size_type i = buf_.find_last_of(" \f\n\r\t\v");
		i = (i == string::npos) ? 0 : ++i;

		string tmp = buf_.substr(i, buf_.length() - i);
		StrStrMap::const_iterator p = pDict_->find(tmp);

		if ( p != pDict_->end() ) {
			buf_.erase(i, buf_.length() - i);
			buf_ += p->second;
		}
	}
	buf_ += c;
}

int main() {
	
	// Set up the map
	StrStrMap dict;
	TextAutoField txt(&dict);

	dict["taht"] = "that";
	dict["right"] = "wrong";
	dict["bug"] = "feature";

	string tmp = "He's right, tath's a bug.";
	cout << "Original: " << tmp << '\n';
	for (string::iterator p = tmp.begin();p != tmp.end(); ++p) {
		txt.append(*p);
	}

	txt.getText(tmp);
	cout << "Corrected version is: " << tmp << '\n';
}
