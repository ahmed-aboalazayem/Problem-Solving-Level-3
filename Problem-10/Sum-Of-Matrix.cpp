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

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3];

  FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 10);

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  cout << "\nSum Of Matrix Is: " << SumOfMatrix(Matrix, 3, 3) << endl;

  system("pause>0");
}
