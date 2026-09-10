#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin >> ws, str);

	return str;
}

string RemovePunctuations(string str)
{
	string newString = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (!ispunct(str[i]))
			newString += str[i];
	}

	return newString;
}

int main()
{
	string str = "I'm From Egypt, I Love Egypt Very Much.";

	cout << "Original String    : " << str << endl;
	cout << "Punctuation Removed: " << RemovePunctuations(str);

	system("pause>0");
}
