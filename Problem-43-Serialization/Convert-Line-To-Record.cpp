#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
	string AccountNumber, PinCode, Name, Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};

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

stClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
	vector<string> vClientData = Split(Line, Separator);
	stClient Client;

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	
	return Client;
}

void PrintClientData(stClient Client)
{
	cout << "\n\tClient Data" << endl;
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "PinCode        : " << Client.PinCode << endl;
	cout << "Name           : " << Client.Name << endl;
	cout << "Phone          : " << Client.Phone << endl;
	cout << "Account Balance: " << Client.AccountBalance << endl;
}

int main()
{
	string Line = "A100#//#1234#//#Ahmed Aboalazayem#//#010343222#//#50000.000000";

	cout << "Client Record Is:" << endl;
	cout << Line << endl;

	cout << "\nConvert Line To Record:" << endl;
	PrintClientData(ConvertLineToRecord(Line));

	system("pause>0");
}
