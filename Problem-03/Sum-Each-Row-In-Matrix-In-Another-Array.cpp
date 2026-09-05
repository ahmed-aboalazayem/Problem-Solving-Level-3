#include <iostream>
#include <cstdlib>
#include <cstdio>
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

int GetRowSum(int Matrix[3][3], int RowsNumber, int Columns)
{
  int Sum = 0;

  for (int j = 0; j < Columns; j++)
  {
    Sum += Matrix[RowsNumber][j];
  }

  return Sum;
}

void SumMatrixRowsInArray(int Results[3], int Matrix[3][3], int Rows, int Columns)
{
  cout << "\nThe Following Are The Sum Of Each Row In The Matrix: " << endl;
  for (int i = 0; i < Rows; i++)
  {
    Results[i] = GetRowSum(Matrix, i, Columns);
  }
}

void PrintRowsSum(int Results[3], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
    printf("Row #%d Sum = %d\n", (i + 1), Results[i]);
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3], Results[3];

  FillMatrixWithRandomNumbers(Matrix, 3, 3);
  cout << "The Following Is a 3X3 Random Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  SumMatrixRowsInArray(Results, Matrix, 3, 3);
  PrintRowsSum(Results, 3);

  system("pause>0");
}
