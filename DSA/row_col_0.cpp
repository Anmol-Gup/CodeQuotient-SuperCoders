#include<iostream>
using namespace std;
#define ROWS 50
#define COLS 50
 
// Approach-1
void makeAllZero(int mat[ROWS][COLS], int n, int m){
   int i,j;
   int row[n], column[m];
   for (i=0; i<n; i++)
       row[i] = 1;
   for (i=0; i<m; i++)
       column[i] = 1;
   for (i=0; i<n; i++) {
       for (j=0; j<m; j++) {
           if (mat[i][j] == 0){
               row[i] = 0;
               column[j] = 0;
           }
       }
   }
   for (i=0; i<n; i++) {
       for (j=0; j<m; j++) {
           if (row[i] == 0 || column[j] == 0)
               mat[i][j] = 0;
       }
   }
}
 
// Approach-2 (Space Optimization)
void makeAllZero(int mat[ROWS][COLS], int n, int m){
   int i, j, rowFlag = 0, colFlag = 0;
   for (j=0; j<m; j++)
       if (mat[0][j] == 0)
           rowFlag = 1;
   for (i=0; i<n; i++)
       if (mat[i][0] == 0)
           colFlag = 1;
   for (i=1; i<n; i++) {
       for (j=1; j<m; j++) {
           if (mat[i][j] == 0){
               mat[i][0] = 0;
               mat[0][j] = 0;
           }
       }
   }
   for (i=1; i<n; i++) {
       for (j=1; j<m; j++) {
           if (mat[i][0] == 0 || mat[0][j] == 0)
               mat[i][j] = 0;
       }
   }
   if (rowFlag == 1) {
       for (j=0; j<m; j++)
           mat[0][j] = 0;
   }
   if (colFlag == 1)
       for (i=0; i<n; i++)
           mat[i][0] = 0;
}
int main()
{
   int mat[ROWS][COLS] = {{4, 5, 6}, {7, 0, 9}, {1, 1, 3}};
   int r = 3, c = 3;
   makeAllZero(mat, r, c);
   for(int i = 0; i < r; i++){
       for(int j = 0; j < c; j++)
       cout<<mat[i][j]<<" ";
       cout<<endl;
   }
   return 0;
}
