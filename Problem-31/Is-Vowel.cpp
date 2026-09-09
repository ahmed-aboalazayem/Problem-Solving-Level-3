#include <iostream>
#include <string>
#include <cctype>
using namespace std;


char ReadChar(string Message = "Please Enter a Character")
{
	char chr;
	
	cout << Message << ": ";
	cin >> chr;
	
	return chr;
}

bool IsVowel(char chr)
{
	chr = tolower(chr);

	return (chr == 'a' || chr == 'e' || chr == 'o' || chr == 'u' || chr == 'i');
}

int main()
{
	char chr = ReadChar();
	if (IsVowel(chr))
		cout << "Character '" << chr << "' Is a Vowel." << endl;
	else
		cout << "Character '" << chr << "' Is NOT a Vowel." << endl;

	system("pause>0");
}
