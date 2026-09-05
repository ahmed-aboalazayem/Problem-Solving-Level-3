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

int GetColumnSum(int Matrix[3][3], int Rows, int ColumnNumber)
{
  int Sum = 0;

  for (int j = 0; j < Rows; j++)
  {
    Sum += Matrix[j][ColumnNumber];
  }

  return Sum;
}

void SumMatrixColumnsInArray(int Results[3], int Matrix[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Columns; i++)
  {
    Results[i] = GetColumnSum(Matrix, Rows, i);
  }
}

void PrintColumnsSum(int Results[3], int arrLength)
{
  cout << "\nThe Following Are The Sum Of Each Column In The Matrix: " << endl;
  for (int i = 0; i < arrLength; i++)
    printf("Column #%d Sum = %d\n", (i + 1), Results[i]);
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3], Results[3];

  FillMatrixWithRandomNumbers(Matrix, 3, 3);

  cout << "The Following Is a 3X3 Random Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  SumMatrixColumnsInArray(Results, Matrix, 3, 3);
  PrintColumnsSum(Results, 3);

  system("pause>0");
}
