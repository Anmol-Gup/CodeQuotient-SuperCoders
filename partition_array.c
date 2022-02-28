#include <stdio.h>
void printArray(int arr[], int n) {
   for(int i=0; i<n; i++)
       printf("%d ", arr[i]);
}
// Approach-1
void partitionArray(int arr[], int res[], int n, int x) {
   int i=0;
   for (int j=0; j<n; j++) {
       if (arr[j] <= x)
           res[i++] = arr[j];
   }
   for (int j=0; j<n; j++) {
       if (arr[j] > x)
           res[i++] = arr[j];
   }
}
// Approach-2
void partitionArray(int arr[], int res[], int n, int x) {
   int j = 0, k = n-1;
   for (int i=0; i<n; i++) {
       if (arr[i] <= x)
           res[j++] = arr[i];
       else
           res[k--] = arr[i];
   }
}
// Approach-3
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
void partitionArray(int arr[], int n, int x) {
   int i=0;
   for (int j=0; j<n; j++) {
       if (arr[j] <= x) {
           swap(&arr[j], &arr[i]);
           i++;
       }
   }
}
int main() {
   int arr[] = {3,9,7,2,4,1,6};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 4;
   int res[n];
   partitionArray(arr, res, n, x);
   printArray(res, n);
   return 0;
}
