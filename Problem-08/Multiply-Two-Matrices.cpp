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

void MultiplyTwoMatrices(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
    }
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix1[3][3], Matrix2[3][3], Results[3][3];

  FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 10);
  FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 10);

  cout << "Matrix #1:" << endl;
  PrintMatrix(Matrix1, 3, 3);

  cout << "\nMatrix #2:" << endl;
  PrintMatrix(Matrix2, 3, 3);

  MultiplyTwoMatrices(Matrix1, Matrix2, Results, 3, 3);

  cout << "\nThe Following Is a 3X3 Matrix After Multiply [Matrix #1 * Matrix #2]:" << endl;
  PrintMatrix(Results, 3, 3);

  system("pause>0");
}
