#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stClient
{
	string AccountNumber, PinCode, Name, Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};

const string FileName = "Clients.txt";

string ReadString(string Message = "Please Enter Your String")
{
	string str;

	cout << Message << ": ";
	getline(cin >> ws, str);

	return str;
}

char ReadChar(string Message = "Please Enter a Character")
{
	char chr;

	cout << Message << ": ";
	cin >> chr;

	return chr;
}

double ReadDoubleNumber(string Message)
{
	double balance;

	cout << Message << ": ";
	cin >> balance;

	return balance;
}

stClient ReadClientInfo()
{
	stClient ClientInfo;

	ClientInfo.AccountNumber = ReadString("Please Enter Account Number");
	ClientInfo.PinCode = ReadString("Please Enter PinCode");
	ClientInfo.Name = ReadString("Please Enter Name");
	ClientInfo.Phone = ReadString("Please Enter Phone Number");
	ClientInfo.AccountBalance = ReadDoubleNumber("Please Enter Account Balance");

	return ClientInfo;
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

string ConvertRecordToLine(stClient Record, string Seperator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Record.AccountNumber + Seperator;
	stClientRecord += Record.PinCode + Seperator;
	stClientRecord += Record.Name + Seperator;
	stClientRecord += Record.Phone + Seperator;
	stClientRecord += to_string(Record.AccountBalance);

	return stClientRecord;
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

void AddClientToFile(string fileName, string clientLine)
{
	fstream File;
	File.open(fileName, ios::out | ios::app);

	if (File.is_open())
	{
		File << clientLine << endl;
		File.close();
	}
}

void AddNewClient()
{
	stClient client = ReadClientInfo();
	AddClientToFile(FileName, ConvertRecordToLine(client));
}

void AddClients()
{
	char AddMore = 'n';

	do
	{
		system("cls");

		AddNewClient();

		AddMore = ReadChar("\nDo You Want To Add More Clients[y: Yes, n: No]: ");
	} while (toupper(AddMore) == 'Y');
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
