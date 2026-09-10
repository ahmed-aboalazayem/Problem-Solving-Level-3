#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

string Join(string arr[], int arrLength, string delim)
{
	string newString = "";

	for (int i = 0; i < arrLength; i++)
	{
		newString += arr[i];

		if (i != arrLength - 1)
			newString += delim;
	}

	return newString;
}

int main()
{
	vector<string> vStrings = {"Ahmed", "Mohammed", "Ali"};
	string arr[3] = {"Ahmed", "Mohammed", "Ali"};

	cout << Join(vStrings, "/##/") << endl;
	cout << Join(arr, 3, "/##/") << endl;

	system("pause>0");
}
