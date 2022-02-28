#include <iostream>
using namespace std;
 
#define n 4
 
bool isSafe(int board[n][n], int r, int c) {
   int i,j;
   for (i=0; i<r; i++) {
       if (board[i][c] == 1)
           return false;
   }
 
   i = r-1;
   j = c-1;
   while (i>=0 && j>=0) {
       if (board[i][j] == 1)
           return false;
       i--;
       j--;
   }
   i = r-1;
   j = c+1;
   while (i>=0 && j<n) {
       if (board[i][j] == 1)
           return false;
       i--;
       j++;
   }
   return true;
}
bool solveNQueen(int board[n][n], int r) {
   if (r == n)
       return true;
   
   for (int j=0; j<n; j++) {
       if (isSafe(board, r, j)) {
           board[r][j] = 1;
           if (solveNQueen(board, r+1))
               return true;
           board[r][j] = 0;
       }
   }
   return false;
}
void printSolution(int board[n][n]) {
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++)
           cout<<" " << board[i][j] << " ";
       cout<<endl;
   }
}
int main() {
   int board[n][n] = {0};
   
   if (solveNQueen(board, 0)) {
       printSolution(board);
   }
   return 0;
}
