#include <bits/stdc++.h>
using namespace std;
struct Item {
 int value, weight;
};
bool compare(struct Item a, struct Item b){
   double r1 = (double)a.value / (double)a.weight;
   double r2 = (double)b.value / (double)b.weight;
   return r1 > r2;
}
double fractionalKnapsack(struct Item arr[], int W, int n) {
   sort(arr, arr + n, compare);
   int curWeight = 0;
   double finalvalue = 0.0;
   for (int i = 0; i < n; i++) {
       if (curWeight + arr[i].weight <= W) {
           curWeight += arr[i].weight;
           finalvalue += arr[i].value;
       } else {
           int remain = W - curWeight;
           finalvalue += remain * ((double) arr[i].value / (double) arr[i].weight);
       break;
       }
   }
   return finalvalue;
}
int main() {
   int W = 50;
   struct Item arr[] = { { 45, 5 }, { 60, 30 }, { 125, 25 } };
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Maximum possible value = " << fractionalKnapsack(arr, W, n);
   return 0;
}

float fractionalKnapsack(int val[], int weight[], int n, int W)
{
  Item items[n];
  for(int i=0;i<n;i++)
  {
    items[i].value=val[i];
    items[i].weight=weight[i];
  }
  sort(items,items+n,comparator);
  float result = 0.0;
   for (int i = 0; i < n; i++) {
      if(items[i].weight<=W)
      {
        result+=items[i].value;
        W=W-items[i].weight;
      }
     else{
       result+=((float)W/(float)items[i].weight)*(float)items[i].value;
       break;
     }
   }
 return result;
}
