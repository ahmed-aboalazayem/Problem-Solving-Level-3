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

string LowerFirstLetterOfEachWord(string str)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < str.length(); i++)
	{
		if (IsFirstLetter && str[i] != ' ')
			str[i] = tolower(str[i]);

		IsFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;
}

int main()
{
	string str = ReadString();
	str = LowerFirstLetterOfEachWord(str);

	cout << "\nString After Lower First Letter Of Each Word:\n";
	cout << str;

	system("pause>0");
}
