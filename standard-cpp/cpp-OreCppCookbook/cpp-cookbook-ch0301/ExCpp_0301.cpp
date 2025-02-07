#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

long hex2int(const string& hexStr)
{
	char *offset;
	if(hexStr.length() > 2)
	{
		if( hexStr[0] == '0' && hexStr[1] == 'x')
		{
			return strtol( hexStr.c_str(), &offset, 0);
		}
	}
	return strtol(hexStr.c_str(), &offset, 16);
}

int main(void)
{
	string str1 = "0x12AB";	
	string str2 = "12AB";
	string str3 = "QAFG";
	cout << hex2int(str1) << endl;
	cout << hex2int(str2) << endl;
	cout << hex2int(str3) << endl;
	return 0;
}
