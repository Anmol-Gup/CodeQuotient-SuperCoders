int count=0;
void findpath(int size, int r, int c,int maze[][50]) {
   if (r == size-1 && c == size-1) {
       count++;
       return;
   }
   // right
   if (c+1 < size && maze[r][c+1] != -1)
       findpath(size, r, c+1,maze);
  // down
   if (r+1 < size && maze[r+1][c] != -1)
       findpath(size, r+1, c,maze);
}
int solveMaze(int maze[][50], int size) {
  // Write your code here
  findpath(size,0,0,maze);
  return count;
}
