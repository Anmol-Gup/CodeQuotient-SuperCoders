#include <stdio.h>

// Approach-1
int removeDuplicates(int arr[], int n){
   int res[n];
   res[0] = arr[0];
   int i = 1, j = 1;
   while (i < n){
       if (arr[i] != arr[i-1]){
           res[j] = arr[i];
           j++;
       }
       i++;
   }
   for (i=0; i<j; i++)
       arr[i] = res[i];
    return j;
}
// Approach-2
int removeDuplicates(int arr[], int n){
   int i = 1, j = 1;
   while (i < n){
       if (arr[i] != arr[i-1]){
           arr[j] = arr[i];
           j++;
       }
       i++;
   }
   return j;
}

int main() {
   int arr[] = {2, 2, 4, 4, 4, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   n = removeDuplicates(arr, n);
   for (int i=0; i<n; i++)
       printf("%d ", arr[i]);
   return 0;
}
