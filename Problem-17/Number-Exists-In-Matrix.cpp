#include <iostream>
#include <cstdio>
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

bool IsNumberInMatrix(int Matrix[3][3], int Number, int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix[i][j] == Number)
        return true;
    }
  }
  return false;
}

int main()
{
  int Matrix[3][3] = {{10, 0, 0}, {0, 10, 0}, {0, 10, 10}};

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  int Number = ReadNumber("\nPlease Enter The Number To Look For In The Matrix");

  if (IsNumberInMatrix(Matrix, Number, 3, 3))
    cout << "The Number [" << Number << "] Is Exist In The Matrix." << endl;
  else
    cout << "The Number [" << Number << "] Is NOT Exist In The Matrix." << endl;

  system("pause>0");
}
