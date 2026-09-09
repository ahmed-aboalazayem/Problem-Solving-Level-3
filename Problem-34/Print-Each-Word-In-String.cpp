#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin, str);

	return str;
}

void PrintEachWordInString(string str)
{
	string delim = " ";
	int pos = 0;
	string sWord;

	while ((pos = str.find(delim)) != string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
			cout << sWord << endl;

		str.erase(0, pos + delim.length());
	}

	if (str != "")
		cout << str << endl;
}

int main()
{
	string str = ReadString();

	cout << "\nString Words Are:" << endl;
	PrintEachWordInString(str);

	system("pause>0");
}
