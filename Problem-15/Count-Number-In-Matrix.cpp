#include <iostream>
#include <cstdio>
#include <limits>
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

void PrintMatrix(int Matrix[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      printf("%0*d\t", 2, Matrix[i][j]);
    }
    cout << endl;
  }
}

int NumberCountInMatrix(int Matrix[3][3], int Number, int Rows, int Columns)
{
  int Count = 0;

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix[i][j] == Number)
        Count++;
    }
  }
  return Count;
}

int main()
{
  int Matrix[3][3] = {{10, 0, 0}, {0, 10, 0}, {0, 0, 10}};

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  int Number = ReadNumber("\n  Enter The Number To Count In Matrix");

  cout << "\n  Number " << Number << " Count In Matrix Is " << NumberCountInMatrix(Matrix, Number, 3, 3) << " Time(s).";

  system("pause>0");
}
