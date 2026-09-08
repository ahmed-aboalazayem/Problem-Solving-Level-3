#include <iostream>
#include <string>
using namespace std;

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin, str);

	return str;
}

void PrintFirstLetterOfEachWord(string str)
{
	bool IsFirstLetter = true;

	cout << "\nFirst Letters Of This String:" << endl;
	for (int i = 0; i < str.length(); i++)
	{
		if (IsFirstLetter && str[i] != ' ')
			cout << str[i] << endl;

		IsFirstLetter = (str[i] == ' ' ? true : false);
	}
}

int main()
{
	string str = ReadString();

	PrintFirstLetterOfEachWord(str);

			system("pause>0");
}
