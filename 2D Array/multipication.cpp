#include <iostream>
using namespace std;

const int MAX = 10;

void multiplyMatrices(int mat1[][MAX], int mat2[][MAX], int res[][MAX], int row1, int col1, int row2, int col2)
{
  if (col1 != row2)
  {
    cout << "Matrix multiplication not possible" << endl;
    return;
  }

  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      res[i][j] = 0;
      for (int k = 0; k < col1; k++)
      {
        res[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
}

void printMatrix(int mat[][MAX], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int row1, col1, row2, col2;
  cout << "Enter rows and columns for first matrix: ";
  cin >> row1 >> col1;
  cout << "Enter rows and columns for second matrix: ";
  cin >> row2 >> col2;

  int mat1[MAX][MAX], mat2[MAX][MAX], res[MAX][MAX];

  cout << "Enter elements of first matrix:" << endl;
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      cin >> mat1[i][j];
    }
  }

  cout << "Enter elements of second matrix:" << endl;
  for (int i = 0; i < row2; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      cin >> mat2[i][j];
    }
  }

  multiplyMatrices(mat1, mat2, res, row1, col1, row2, col2);

  cout << "Resultant matrix:" << endl;
  printMatrix(res, row1, col2);

  return 0;
}