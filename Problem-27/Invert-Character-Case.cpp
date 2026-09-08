#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadCharacter(string Message = "Please Enter Your Character")
{
	char chr;

	cout << Message << ": ";
	cin >> chr;

	return chr;
}

char InvertCharCase(char chr)
{
	if (islower(chr))
		return toupper(chr);

	if (isupper(chr))
		return tolower(chr);

	return chr;
}

int main()
{
	char chr = ReadCharacter("Please Enter Your Character To Invert Its Case");

	cout << "The Letter After Invert Case: " << InvertCharCase(chr) << endl;

	system("pause>0");
}
