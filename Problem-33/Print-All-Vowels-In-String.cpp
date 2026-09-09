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

bool IsVowel(char chr)
{
	chr = tolower(chr);

	return (chr == 'a' || chr == 'e' || chr == 'o' || chr == 'u' || chr == 'i');
}

void PrintAllVowels(string str)
{
	for (char chr : str)
    if (IsVowel(chr))
        cout << chr << "  ";
}


int main()
{
	string str = ReadString();

	cout << "\nVowels In String: ";
	PrintAllVowels(str);

	system("pause>0");
}
