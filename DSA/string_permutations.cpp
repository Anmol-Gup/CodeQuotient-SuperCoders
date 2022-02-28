#include <bits/stdc++.h>
using namespace std;
 
void permute(char * a, int p, int n) {
   int i;
   if (p == n-1)
       cout << a << "\n";
   else {
       for (i = p; i < n; i++) {
           swap(a[p], a[i]);
           permute(a, p + 1, n);
           swap(a[p], a[i]);
       }
   }
}
 
int main() {
   char str[] = "ABC";
   int n = strlen(str);
   permute(str, 0, n);
   return 0;
}
