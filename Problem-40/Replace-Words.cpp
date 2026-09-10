#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin >> ws, str);

	return str;
}

vector<string> Split(string str, string delim = " ")
{
	int pos = 0;
	string sWord;
	vector<string> vWords;

	while ((pos = str.find(delim)) != string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
			vWords.push_back(sWord);

		str.erase(0, pos + delim.length());
	}

	if (str != "")
		vWords.push_back(str);

	return vWords;
}

string ToLower(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	return str;
}

string Join(vector<string> &vStrings, string delim)
{
	string newString = "";
	int vSize = vStrings.size();

	for (int i = 0; i < vSize; i++)
	{
		newString += vStrings[i];

		if (i != vSize - 1)
			newString += delim;
	}

	return newString;
}

string ReplaceWords(string str, string oldWord, string newWord, bool MatchCase = true)
{
	vector<string> vWords = Split(str);
	int vLength = vWords.size();

	for (string &s : vWords)
	{
		if (MatchCase)
		{
			if (s == oldWord)
				s = newWord;
		}
		else
		{
			if (ToLower(s) == ToLower(oldWord))
				s = newWord;
		}
	}

	return Join(vWords, " ");
}

int main()
{
	string str = "I'm From Egypt , I Love Egypt Very Much.";

	cout << "Original String       : " << str << endl;
	cout << "Replace [Egypt -> USA]: " << ReplaceWords(str, "Egypt", "USA") << endl;

	system("pause>0");
}
