// Approach-1 (Prefix Sum-Hashing)
void findTheSubArray(int a[], int n, int sum){
	// Write your code here
  int i,j,prefix=0;
  map <int,int> m;
  for(i=0;i<n;i++)
  {
    prefix+=a[i];
    if(prefix==sum)
    {
      cout<<0<<' '<<i;
      return;
    }
    else if(m.find(prefix-sum)!=m.end())
    {
     cout<<m[prefix-sum]<<' '<<i;
     return; 
    }
    else
      m[prefix]=i+1;
  }
  cout<<-1;
}

// Approach-2 (Naive Approach)
void findSubarraySum(int arr[], int n, int sum)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        int subarraySum = 0;
        for (j=i; j<n; j++)
        {
            subarraySum = subarraySum + arr[j];
            if(subarraySum == sum)
            {
                cout << i << " " << j;
                return;
            }
        }
    }
    cout << -1;
}
