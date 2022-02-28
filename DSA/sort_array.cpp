#include <bits/stdc++.h>
using namespace std;

// Approach-2
void swap(int *x, int *y) 
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sorting012Array(int a[], int n) {
  int i = 0, j = 0, k = n - 1;
  while (j <= k) {
    if (a[j] == 0) {
      swap( &a[j], &a[i]);
      i++;
      j++;
    } else if (a[j] == 1)
      j++;
    else if (a[j] == 2) {
      swap( &a[j], &a[k]);
      k--;
    }
  }
}

// Approach-3
void sorting012Array(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0; i<n; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
    }
    int i = 0;
    while(count0--)
        arr[i++] = 0;
    while(count1--)
        arr[i++] = 1;
    while(count2--)
        arr[i++] = 2;
    }
}
int main() {
    int arr[] = {1, 1, 0, 2, 0, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Approach-1
    sort(arr, arr+n);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
