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

void PrintClientRecord(const stClient &client)
{
	cout << "| " << left << setw(15) << client.AccountNumber;
	cout << "| " << left << setw(10) << client.PinCode;
	cout << "| " << left << setw(40) << client.Name;
	cout << "| " << left << setw(12) << client.Phone;
	cout << "| " << left << setw(16) << client.AccountBalance << " |";
}

void PrintAllClientsData(const vector<stClient> &vClientsData)
{
	cout << "\t\t\t\tClients List [" << vClientsData.size() << "] Client(s)." << endl;

	cout << "\n---------------------------------------------------------------------------------------------------------" << endl;
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(16) << "Account Balance" << " |";
	cout << "\n---------------------------------------------------------------------------------------------------------" << endl;

	for (stClient client : vClientsData)
	{
		PrintClientRecord(client);
		cout << endl;
	}

	cout << "---------------------------------------------------------------------------------------------------------\n"
			 << endl;
}

int main()
{
	PrintAllClientsData(LoadClientDataFromFile(FileName));

	system("pause>0");
}
