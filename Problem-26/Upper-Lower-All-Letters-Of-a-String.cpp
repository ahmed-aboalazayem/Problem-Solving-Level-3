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

string ToUpper(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);

	return str;
}

string ToLower(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	return str;
}

int main()
{
	string str = ReadString();

	str = ToUpper(str);
	cout << "\nAfter Upper All String:\n";
	cout << str;

	str = ToLower(str);
	cout << "\nAfter Lower All String:\n";
	cout << str;

	system("pause>0");
}
