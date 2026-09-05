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

void PrintMiddleRowOfMatrix(int Matrix[3][3], int Rows)
{
  cout << "\nMiddle Row Of The Matrix:" << endl;

  for (int j = 0; j < 3; j++)
    printf("%0*d\t", 2, Matrix[Rows / 2][j]);

  cout << endl;
}

void PrintMiddleColumnOfMatrix(int Matrix[3][3], int Rows, int Columns)
{
  cout << "\nMiddle Column Of The Matrix:" << endl;

  for (int i = 0; i < Rows; i++)
    printf("%0*d\n", 2, Matrix[i][Columns / 2]);
}

int main()
{
  srand((unsigned)time(NULL));

  int Matrix[3][3];

  FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 10);

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  PrintMiddleRowOfMatrix(Matrix, 3);
  PrintMiddleColumnOfMatrix(Matrix, 3, 3);

  system("pause>0");
}
