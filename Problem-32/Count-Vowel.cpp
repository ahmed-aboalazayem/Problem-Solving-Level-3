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

int CountVowels(string str)
{
	int Count = 0;

	for (int i = 0; i < str.length(); i++)
		if (IsVowel(str[i]))
			Count++;

	return Count;
}


int main()
{
	string str = ReadString();

	cout << "\nNumber Of Vowels Is: " << CountVowels(str) << endl;

	system("pause>0");
}
