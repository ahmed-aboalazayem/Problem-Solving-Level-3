#include <iostream>
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

int GetMinNumberInMatrix(int Matrix[3][3], int Rows, int Columns)
{
  int Min = Matrix[0][0];

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix[i][j] < Min)
        Min = Matrix[i][j];
    }
  }

  return Min;
}

int GetMaxNumberInMatrix(int Matrix[3][3], int Rows, int Columns)
{
  int Max = Matrix[0][0];

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix[i][j] > Max)
        Max = Matrix[i][j];
    }
  }

  return Max;
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3];
  FillMatrixWithRandomNumbers(Matrix, 3, 3);

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  cout << "\nMinimum Number In Matrix Is: " << GetMinNumberInMatrix(Matrix, 3, 3) << endl;
  cout << "Maximum Number In Matrix Is: " << GetMaxNumberInMatrix(Matrix, 3, 3) << endl;

  system("pause>0");
}
