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

int SumOfMatrix(int Matrix[3][3], int Rows, int Columns)
{
  int Sum = 0;

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      Sum += Matrix[i][j];
    }
  }

  return Sum;
}

bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Columns)
{
    return (SumOfMatrix(Matrix1, Rows, Columns) == SumOfMatrix(Matrix2, Rows, Columns));
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 10);
    FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 10);

    cout << "Matrix #1:" << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix #2:" << endl;
    PrintMatrix(Matrix2, 3, 3);

    if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYES, Matrices Are Equal [Sum = " << SumOfMatrix(Matrix1, 3, 3) << "] In Each Matrix.";
    else
        cout << "\nNO, Matrices Are NOT Equal [Matrix #1 Sum = " << SumOfMatrix(Matrix1, 3, 3) << " | Matrix #2 Sum = " << SumOfMatrix(Matrix2, 3, 3) << "]";

  system("pause>0");
}
