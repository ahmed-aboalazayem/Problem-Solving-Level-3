#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin, str);

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

int main()
{
	vector<string> vWords = Split(ReadString(), " ");

	cout << "\nTokens: " << vWords.size() << endl;
	for (const string &word : vWords)
		cout << word << endl;

	system("pause>0");
}
