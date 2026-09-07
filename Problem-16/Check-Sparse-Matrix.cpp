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

int NumberCountInMatrix(int Matrix[3][3], int Number, int Rows, int Columns)
{
  int Count = 0;

  for (int i = 0; i < Rows; i++)
  {
    for (int j = 0; j < Columns; j++)
    {
      if (Matrix[i][j] == Number)
        Count++;
    }
  }
  return Count;
}

bool IsSparseMatrix(int Matrix[3][3], int Rows, int Columns)
{
	return (NumberCountInMatrix(Matrix, 0, Rows, Columns) >= (Rows * Columns) / 2);
}

int main()
{
  int Matrix[3][3] = { {10, 0, 0}, {0, 10, 0}, {0, 10, 10} };

	cout << "Matrix:" << endl;
	PrintMatrix(Matrix, 3, 3);


	if (IsSparseMatrix(Matrix, 3, 3))
		cout << "The Matrix Is a Sparse Matrix" << endl;
	else
		cout << "The Matrix Is NOT a Sparse Matrix" << endl;

  system("pause>0");
}
