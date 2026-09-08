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


void PrintFibonacci(short Number)
{
	int FebNumber = 0;
	int Prev2 = 0, Prev1 = 1;
	
	cout << "1 ";
	for (short i = 2; i <= Number; ++i)
	{
		FebNumber = Prev1 + Prev2;
		
		cout << FebNumber << " ";
		
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}

int main()
{
  
  int Number = ReadNumber("Enter The Number To Get Fibonacci Series");

	cout << "\nFibonacci Series Of [" << Number << "]: ";
	PrintFibonacci(Number);

  system("pause>0");
}
