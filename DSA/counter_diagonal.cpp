#include <iostream>
using namespace std;

#define n 3

void counterDiagonal(int mat[n][n])
{
	for (int col = 0; col < n; col++)
    {
		int i = 0, j = col;

		while (j >= 0 && i < n) {
			cout << mat[i][j] << " ";
			j--;
			i++;
		}
	}

	for (int row = 1; row < n; row++)
    {
		int i = row, j = n - 1;

		while (i < n && j >= 0) {
			cout << mat[i][j] << " ";
			j--;
			i++;
		}
	}
}

int main()
{
    int mat[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	        
	counterDiagonal(mat);

	return 0;
}
