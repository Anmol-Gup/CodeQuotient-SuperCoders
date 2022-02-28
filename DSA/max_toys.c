// Using Greedy Approach
int maxToys(int cost[], int n, int X){
	// Write your code here
  sort(cost,cost+n);
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(X<cost[i])
      break;
    else
    {
      c++;
      X=X-cost[i];
    }
  }
  return c;
}
