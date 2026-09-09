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

char ReadChar(string Message = "Please Enter a Character")
{
	char chr;
	
	cout << Message << ": ";
	cin >> chr;
	
	return chr;
}

char InvertCharCase(char chr)
{
	return (islower(chr) ? toupper(chr) : tolower(chr));
}


int LetterCountInString(string str, char chr, bool MatchCase = true)
{
	int Count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (MatchCase && str[i] == chr)
    	Count++;

		if (!MatchCase && tolower(chr) == tolower(str[i]))
    	Count++;
	}
	return Count;
}

int main()
{
	string str = ReadString();
	char chr = ReadChar();
	string MatchCaseStr = ReadString("Match Case Or Not [y: Yes, n: No]");
	bool MatchCase = MatchCaseStr == "y" || MatchCaseStr == "Y";

	if(MatchCase)
		cout << "\nLetter '" << chr << "' Count: " << LetterCountInString(str, chr, MatchCase);
	else
		cout << "\nLetter '" << chr << "' Or '" << InvertCharCase(chr) << "' Count: " << LetterCountInString(str, chr, MatchCase);

	system("pause>0");
}
