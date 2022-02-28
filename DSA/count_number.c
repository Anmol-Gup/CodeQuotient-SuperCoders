#include <stdio.h>

// Approach-1
int getCount(int arr[], int n, int k) {
 int count = 0;
 for (int i=0; i<n; i++) {
   if (arr[i] == k)
       count++;
 }   
 return count;
}

// Approach-2
int getFistOccurrence(int A[], int left, int right, int key) {
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (A[mid] == key) {
           if (mid - 1 >= left && A[mid - 1] == key)
               right = mid - 1;
           else
               return mid;
       } else if (A[mid] < key)
           left = mid + 1;
       else
           right = mid - 1;
   }
   return -1;
}

int getLastOccurrence(int A[], int left, int right, int key) {
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (A[mid] == key) {
           if (mid + 1 <= right && A[mid + 1] == key)
               left = mid + 1;
           else
               return mid;
       } else if (A[mid] < key)
           left = mid + 1;
       else
           right = mid - 1;
   }
   return -1;
}
int getCount(int arr[], int n, int k) {
   int first = getFistOccurrence(arr, 0, n - 1, k);
   if (first == -1)
       return 0;
   int last = getLastOccurrence(arr, 0, n - 1, k);
   return (last - first + 1);
}

int main() {
   int arr[] = {1, 2, 3, 4, 4, 4, 5, 8, 9, 10};
   int n = sizeof(arr) / sizeof(arr[0]);
   int k = 4;
   printf("Count = %d", getCount(arr, n, k));
   return 0;
}
