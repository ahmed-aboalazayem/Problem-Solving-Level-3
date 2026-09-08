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

string CapitalizeFirstLetterOfEachWord(string str)
{
	bool IsFirstLetter = true;

	for (int i = 0; i < str.length(); i++)
	{
		if (IsFirstLetter && str[i] != ' ')
			str[i] = toupper(str[i]);

		IsFirstLetter = (str[i] == ' ' ? true : false);
	}

	return str;
}

int main()
{
	string str = ReadString();
	str = CapitalizeFirstLetterOfEachWord(str);

	cout << "\nString After Upper First Letter Of Each Word:\n";
	cout << str;

	system("pause>0");
}
