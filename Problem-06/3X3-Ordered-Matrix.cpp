#include <iostream>
#include <cstdio>
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

int main()
{
  int Matrix[3][3];

  FillMatrixWithOrderedNumbers(Matrix, 3, 3);

  cout << "The Following Is a 3X3 Ordered Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  system("pause>0");
}
