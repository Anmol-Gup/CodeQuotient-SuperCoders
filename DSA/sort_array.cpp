#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 1, 0, 2, 0, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Approach-1
    sort(arr, arr+n);
    
   // Approach-2
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

    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
