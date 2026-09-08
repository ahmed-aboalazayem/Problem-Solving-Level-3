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

char InvertCharCase(char chr)
{
	if (islower(chr))
		return toupper(chr);

	if (isupper(chr))
		return tolower(chr);

	return chr;
}

string InvertLettersCase(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = InvertCharCase(str[i]);

	return str;
}

int main()
{
	string str = ReadString();
	str = InvertLettersCase(str);

	cout << "\nString After Inverting All Letters Case:\n";
	cout << "\t" << str;

	system("pause>0");
}
