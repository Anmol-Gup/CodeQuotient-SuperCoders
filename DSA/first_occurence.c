#include <stdio.h>
 
// Approach-1
int getFirstOccurrence(int arr[], int n, int k) {
   for (int i = 0; i < n; i++) {
       if (arr[i] == k)
           return i;
   }
   return -1;
}

// Approach-2
int getFirstOccurrence(int A[], int n, int k) {
   int left = 0, right = n - 1;
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (A[mid] == k) {
           if (mid - 1 >= left && A[mid - 1] == k)
               right = mid - 1;
           else
               return mid;
       } else if (A[mid] < k)
           left = mid + 1;
       else
           right = mid - 1;
   }
   return -1;
}

int main() {
   int arr[] = {1,2,3,4,4,4,5,8,9,10};
   int n = sizeof(arr) / sizeof(arr[0]);
   int k = 4;
   printf("First Occurrence = %d", getFirstOccurrence(arr, n, k));
   return 0;
}
