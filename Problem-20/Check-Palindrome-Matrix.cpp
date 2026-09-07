#include <iostream>
#include <cstdio>
#include <limits>
#include <ctime>
using namespace std;

int RandomNumber(int Min, int Max)
{
  return rand() % (Max - Min + 1) + Min;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], int Rows, int Columns, int Min = 1, int Max = 100)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      Matrix[i][j] = RandomNumber(Min, Max);
    }
  }
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

bool IsPalindromeMatrix(int Matrix[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns / 2; j++)
    {
      if (Matrix[i][j] != Matrix[i][Columns - j - 1])
        return false;
    }
  }
  return true;
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3] = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};
  // FillMatrixWithRandomNumbers(Matrix, 3, 3);

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  if (IsPalindromeMatrix(Matrix, 3, 3))
    cout << "\nThe Matrix Is a Palindrome Matrix." << endl;
  else
    cout << "The Matrix Is NOT a Palindrome Matrix." << endl;

  system("pause>0");
}
