#include <bits/stdc++.h>
using namespace std;
 
int minCost(int lengths[], int n)
{
   priority_queue<int, vector<int>, greater<int> > pq(lengths, lengths + n);
   int cost = 0;
   while (pq.size() > 1) {
       int first = pq.top();
       pq.pop();
       int second = pq.top();
       pq.pop();
       cost += first + second;
       pq.push(first + second);
   }
   return cost;
}
 
int main()
{
    int lengths[] = {6, 2, 3, 8};
    int n = sizeof(lengths) / sizeof(lengths[0]);
    cout << minCost(lengths, n);
    return 0;
}
