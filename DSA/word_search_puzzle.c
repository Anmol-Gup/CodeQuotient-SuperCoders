// Backtracking/DFS
#include <stdio.h>
#include <string.h>
 
#define r 4
#define c 5
 int visited[6][6];
 
int searchWord(char board[r][c], char word[], int i, int j, int m, int n, int index)
{
   if (index == strlen(word))
       return 1;
  
   if (i < 0 || j < 0 || i >= m || j >= n)
       return 0;
      
   if (board[i][j] != word[index] || visited[i][j] == 1)
       return 0;
    visited[i][j] = 1;
  
   if(searchWord(board, word, i-1, j, m, n, index+1) ||
      searchWord(board, word, i+1, j, m, n, index+1) ||
      searchWord(board, word, i, j-1, m, n, index+1) ||
      searchWord(board, word, i, j+1, m, n, index+1)) {
       return 1;
   }
      
   visited[i][j] = 0;
   return 0;
}
 int isFound(char board[r][c], char word[], int m, int n)
{
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
           if (board[i][j] == word[0]) {
               if (searchWord(board, word, i, j, m, n, 0))
                   return 1;
           }
       }
   }
  
   return 0;
}
 int main()
{
   char board[r][c] = { "COXG",
                        "ADTA",
                        "BERM",
                        "ACDE" };
   char word[] = "CODER";
  
   if (isFound(board, word, r, c))
       printf("Found");
   else
       printf("Not Found");
 return 0;
 }

