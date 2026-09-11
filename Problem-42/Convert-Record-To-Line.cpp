#include <iostream>
#include <string>
using namespace std;

struct stClient
{
	string AccountNumber, PinCode, Name, Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};

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

int main()
{
	stClient client = ReadClientInfo();

	cout << "\n\nClient Record For Saving Is:" << endl;
	cout << ConvertRecordToLine(client) << endl;

	system("pause>0");
}
