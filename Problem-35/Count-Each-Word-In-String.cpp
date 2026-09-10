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

int CountEachWordInString(string str)
{
	string delim = " ";
	int pos = 0;
	string sWord;
	int Count = 0;

	while ((pos = str.find(delim)) != string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
			Count++;

		str.erase(0, pos + delim.length());
	}

	if (str != "")
		Count++;

	return Count;
}

int main()
{
	string str = ReadString();

	cout << "\nThe Number Of Words In Your String Is: " << CountEachWordInString(str) << endl;

	system("pause>0");
}
