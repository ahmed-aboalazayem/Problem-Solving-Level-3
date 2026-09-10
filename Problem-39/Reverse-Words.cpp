#include <iostream>
#include <string>
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

string ReverseWordsInString(string str)
{
	string newString = "";
	vector<string> vWords = Split(str);

	for (int i = vWords.size() - 1; i >= 0; i--)
	{
		newString += vWords[i];

		if (i != 0)
			newString += " ";
	}

	return newString;
}

int main()
{
	string str = ReadString();

	cout << "\nString After Reverse: " << endl;
	cout << ReverseWordsInString(str);

	system("pause>0");
}
