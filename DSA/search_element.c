#include <stdio.h>
 
// Approach-1 (Linear Search)
int searchElement(int arr[], int n, int k){
   for (int i=0; i<n; i++){
       if (arr[i] == k)
           return i;
   }
 return -1;
}
 
// Approach-2 (Binary Search)
int binarySearch(int arr[], int k, int l, int r) {
   while (l <= r) {
       int mid = (l + r) / 2;
       if (k == arr[mid])
           return mid;
       else if (k < arr[mid])
           r = mid - 1;
       else
           l = mid + 1;
   }
   return -1;
}
 
int findPivot(int arr[], int n) {
   int l = 0, r = n - 1;
   while (l <= r) {
       if (arr[l] <= arr[r])
           return l;
       int mid = (l + r) / 2;
       int prev = (mid - 1 + n) % n;
       int next = (mid + 1) % n;
       if (arr[prev] > arr[mid] && arr[next] > arr[mid])
           return mid;
       else if (arr[mid] < arr[r])
           r = mid - 1;
       else
           l = mid + 1;
   }
   return -1;
}

int main() {
   int arr[] = {7, 8, 9, 2, 4, 5, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 9;
   printf("%d", searchElement(arr, n, k));
   return 0;
}
