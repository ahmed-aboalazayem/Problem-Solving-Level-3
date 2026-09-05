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

void Swap(int &a, int &b)
{
  int Temp = a;
  a = b;
  b = Temp;
}

void TransposeMatrix(int Matrix[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = i + 1; j < Columns; j++)
    {
      Swap(Matrix[i][j], Matrix[j][i]);
    }
  }
}

void TransposeMatrix(int Matrix[3][3], int Results[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      Results[i][j] = Matrix[j][i];
    }
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3];

  FillMatrixWithOrderedNumbers(Matrix, 3, 3);

  cout << "The Following Is a 3X3 Ordered Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  TransposeMatrix(Matrix, 3, 3);

  cout << "\nThe Following Is a 3X3 Ordered Matrix After Transpose:" << endl;
  PrintMatrix(Matrix, 3, 3);

  system("pause>0");
}
