#include <iostream>
#include <cstdio>
using namespace std;

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

bool IsScalarMatrix(int Matrix[3][3], int Rows, int Columns)
{
  int FirstDiagonalElement = Matrix[0][0];

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (i == j && Matrix[i][j] != FirstDiagonalElement)
        return false;

      if (i != j && Matrix[i][j] != 0)
        return false;
    }
  }
  return true;
}

int main()
{
  int Matrix[3][3] = {{10, 0, 0}, {0, 10, 0}, {0, 0, 10}};

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  if (IsScalarMatrix(Matrix, 3, 3))
    cout << "\nYES, Matrix Is a Scalar Matrix.";
  else
    cout << "\nNO, Matrix Is NOT a Scalar Matrix.";

  system("pause>0");
}
