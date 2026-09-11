#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
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

double ReadDoubleNumber(string Message)
{
	double balance;

	cout << Message << ": ";
	cin >> balance;

	return balance;
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

vector<stClient> LoadClientDataFromFile(string fileName)
{
	vector<stClient> vClients;

	fstream File;
	File.open(fileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			vClients.push_back(ConvertLineToRecord(Line));
		}
		File.close();
	}

	return vClients;
}

bool FindClientByAccountNumber(string AccountNumber, const vector<stClient> &vClientsData, stClient &ClientData)
{

	for (stClient client : vClientsData)
	{
		if (client.AccountNumber == AccountNumber)
		{
			ClientData = client;
			return true;
		}
	}

	return false;
}

void PrintClientData(const stClient &Client)
{
	cout << "\n\tClient Data" << endl;
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "PinCode        : " << Client.PinCode << endl;
	cout << "Name           : " << Client.Name << endl;
	cout << "Phone          : " << Client.Phone << endl;
	cout << "Account Balance: " << Client.AccountBalance << endl;
}

void MarkClientForDeleteByAccountNumber(string AccountNumber, vector<stClient> &vClients)
{
	for (stClient &client : vClients)
		if (client.AccountNumber == AccountNumber)
			client.MarkForDelete = true;
}

void SaveClientsDataToFile(string fileName, vector<stClient> &vClients)
{
	fstream File;
	File.open(fileName, ios::out);

	if (File.is_open())
	{
		for (stClient &client : vClients)
		{
			if (!client.MarkForDelete)
				File << ConvertRecordToLine(client) << endl;
		}

		File.close();
	}
}

stClient UpdateClientInfo(string AccountNumber, stClient ClientInfo)
{
	ClientInfo.AccountNumber = AccountNumber;
	ClientInfo.PinCode = ReadString("Please Enter PinCode");
	ClientInfo.Name = ReadString("Please Enter Name");
	ClientInfo.Phone = ReadString("Please Enter Phone Number");
	ClientInfo.AccountBalance = ReadDoubleNumber("Please Enter Account Balance");

	return ClientInfo;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<stClient> &vClients)
{
	stClient client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, client))
	{
		PrintClientData(client);

		cout << "\n\nAre You Sure You Want To Update This Client[y: Yes, n: No]: ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			for (stClient &client : vClients)
			{
				if (client.AccountNumber == AccountNumber)
				{
					client = UpdateClientInfo(AccountNumber, client);
					break;
				}
			}

			SaveClientsDataToFile(FileName, vClients);

			cout << "\nClient Updated Successfully." << endl;
			return true;
		}
	}
	else
	{
		cout << "The Client With AccountNumber [" << AccountNumber << "] Is NOT Found." << endl;
	}

	return false;
}

int main()
{
	string AccountNumber = ReadString("Please Enter Account Number To Search For");
	vector<stClient> vClients = LoadClientDataFromFile(FileName);

	UpdateClientByAccountNumber(AccountNumber, vClients);

	system("pause>0");
}
