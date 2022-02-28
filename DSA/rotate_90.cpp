#include <iostream>
using namespace std;
#define N 4

// Approach-1
void rotateMatrix(int mat[N][N], int res[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
		    res[j][N-1-i] = mat[i][j];
		}
	}
}
// Approach-2 (In Place rotating the given matrix)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseColumns(int arr[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N/2; j++)
            swap(&arr[i][j], &arr[i][N-j-1]);
}
 
void transposeMatrix(int arr[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
            swap(&arr[i][j], &arr[j][i]);
}
void rotateMatrix(int mat[N][N])
{
    transposeMatrix(mat);
	  reverseColumns(mat);
}

void displayMatrix(int mat[N][N])
{
	int i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			cout << mat[i][j] << "\t";
		cout << "\n";
	}

	cout << "\n";
}

int main()
{
	int mat[N][N] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	
    int res[N][N];

	displayMatrix(mat);

	rotateMatrix(mat, res);

	displayMatrix(res);

	return 0;
}
