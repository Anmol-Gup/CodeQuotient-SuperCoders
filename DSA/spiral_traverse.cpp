#include <iostream>
#include<cstdio>
#define ROWS 50
#define COLS 50
void printSpiral(int a[ROWS][COLS], int n, int m)
{
   int top = 0, down = n-1, left = 0, right = m-1;
   int dir = 0;
   while (top <= down && left <= right){
       if (dir == 0){
           for (int i = left; i <= right; i++)
               printf("%d ", a[top][i]);
           top++;
       }
       else if (dir == 1){ 
           for (int i = top; i <= down; i++)
               printf("%d ", a[i][right]);
           right--;
       }
       else if (dir == 2){ 
           for (int i = right; i >= left; i--)
               printf("%d ", a[down][i]);
           down--;
       }
       else if (dir == 3){ 
           for (int i = down; i >= top; i--)
               printf("%d ", a[i][left]);
           left++;
       }
       dir = (dir+1)%4;
   }
}
int main(){
   int a[ROWS][COLS] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10,11,12},
                       {13,14,15,16}};
   int r=4, c=4;
   printSpiral(a, r, c);
   return 0;
}
