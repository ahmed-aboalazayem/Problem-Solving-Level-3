#include <iostream>
using namespace std;

int ReadNumber(string Message, string ErrorMessage = "Invalid Number, Please Try Again :-)")
{
	int Number;

	cout << Message << ": ";
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << ErrorMessage << endl;
		cout << Message << ": ";
		cin >> Number;
	}

	return Number;
}

void PrintFibonacci(int Number, int Prev1, int Prev2)
{
	int FebNumber = 0;

	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "   ";
		PrintFibonacci(Number - 1, Prev1, Prev2);
	}
}

int main()
{
	int Number = ReadNumber("Enter The Number To Get Fibonacci Series");

	cout << "\nFibonacci Series Of [" << Number << "]: ";
	PrintFibonacci(Number, 1, 0);

	system("pause>0");
}
