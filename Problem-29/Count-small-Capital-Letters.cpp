#include <iostream>
#include <string>
#include <cctype>
using namespace std;

enum enWhatToCount {SmallLetters, CapitalLetters, All};

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin, str);

	return str;
}


int CountLetters(string str, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
		return str.length();
	
	int Count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if(WhatToCount == enWhatToCount::SmallLetters && islower(str[i]))
			Count++;
		
		if(WhatToCount == enWhatToCount::CapitalLetters && isupper(str[i]))
			Count++;
	}

	return Count;
}

int main()
{
	string str = ReadString();

	cout << "\nString Length: " << str.length() << endl;
	cout << "Capital Letters Count: " << CountLetters(str, enWhatToCount::CapitalLetters) << endl;
	cout << "Small Letters Count: " << CountLetters(str, enWhatToCount::SmallLetters) << endl;

	system("pause>0");
}
