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

bool IsIdentityMatrix(int Matrix[3][3], int Rows, int Columns)
{
  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (i == j && Matrix[i][j] != 1)
        return false;

      if (i != j && Matrix[i][j] != 0)
        return false;
    }
  }
  return true;
}

int main()
{
  int Matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

  cout << "Matrix:" << endl;
  PrintMatrix(Matrix, 3, 3);

  if (IsIdentityMatrix(Matrix, 3, 3))
    cout << "\nYES, Matrix Is an Identity Matrix.";
  else
    cout << "\nNO, Matrix Is NOT an Identity Matrix.";

  system("pause>0");
}
