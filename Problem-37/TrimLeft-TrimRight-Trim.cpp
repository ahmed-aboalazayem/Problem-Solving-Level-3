#include <iostream>
#include <string>
using namespace std;

string TrimLeft(string str)
{
	if (str == "")
		return "";

	for (int i = 0; i < str.length(); i++)
		if (str[i] != ' ')
			return str.substr(i);

	return "";
}

string TrimRight(string str)
{
	if (str == "")
		return "";

	for (int i = str.length() - 1; i >= 0; i--)
		if (str[i] != ' ')
			return str.substr(0, i + 1);

	return "";
}

string Trim(string str)
{
	if (str == "")
		return "";

	return TrimRight(TrimLeft(str));
}

int main()
{
	string str = "            Ahmed Aboalazayem Is a Full Stack .Net Developer            ";

	string strTrimLeft = TrimLeft(str);
	string strTrimRight = TrimRight(str);
	string strTrim = Trim(str);

	cout << "Original String: " << str << endl;
	cout << "Original String Length: [" << str.length() << "].\n"
			 << endl;

	cout << "Trim Left  [Length: " << strTrimLeft.length() << "]: " << strTrimLeft << endl;
	cout << "Trim Right [Length: " << strTrimRight.length() << "]: " << strTrimRight << endl;
	cout << "Trim       [Length: " << strTrim.length() << "]: " << strTrim << endl;

	system("pause>0");
}
