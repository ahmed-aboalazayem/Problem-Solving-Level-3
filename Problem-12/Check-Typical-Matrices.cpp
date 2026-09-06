#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int RandomNumber(int Min, int Max)
{
  return rand() % (Max - Min + 1) + Min;
}

void FillMatrixWithOrderedNumbers(int Matrix[3][3], int Rows, int Columns)
{
  int Counter = 0;
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      Matrix[i][j] = ++Counter;
    }
  }
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

bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix1[i][j] != Matrix2[i][j])
        return false;
    }
  }
  return true;
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix1[3][3], Matrix2[3][3];

  FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 10);
  FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 10);

  // FillMatrixWithOrderedNumbers(Matrix1, 3, 3);
  // FillMatrixWithOrderedNumbers(Matrix2, 3, 3);

  cout << "Matrix #1:" << endl;
  PrintMatrix(Matrix1, 3, 3);

  cout << "\nMatrix #2:" << endl;
  PrintMatrix(Matrix2, 3, 3);

  if (AreTypicalMatrices(Matrix1, Matrix2, 3, 3))
    cout << "\nYES, Matrices Are Typical.";
  else
    cout << "\nNO, Matrices Are NOT Typical.";

    system("pause>0");
}
