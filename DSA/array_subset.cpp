// Approach-1 (Hashing)
int isSubsetorNot(int a[], int n, int b[], int m){
  // Write your code here
  set <int> s;
  for(int i=0;i<n;i++)
    s.insert(a[i]);
  for (int i=0; i<m; i++){
	   if (s.find(b[i]) == s.end())
	       return 0;
	}
  return 1;
}

// Approach-2
int isSubsetorNot(int a[], int n, int b[], int m){
  // Write your code here
  for(int i=0;i<m;i++)
    a[i+n]=b[i];
  cout<<endl;
  set <int> s;
  int c=0;
  for(int i=0;i<n+m;i++)
  {
    if(s.find(a[i])!=s.end())
      c+=1;
    s.insert(a[i]);
  }
  if(c==m)
    return 1;
  return 0;
}

// Approach-3 (Linear Search)
int isSubsetorNot(int a[], int n, int b[], int m){
  // Write your code here
  int c,i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[j]==b[i])
        c+=1;
    }
  }
  if(c==m)
    return 1;
  else
    return 0;
}

// Approach-4 (Binary Search)
/*
def binarySearch(arr,l,r,key):
  while l<=r:
    m=(l+r)//2;
    if arr[m]==key:
      return True
    elif arr[m]<key:
      l=m+1
    else:
      r=m-1
  return False
def isSubsetOrNot(a,a_size,b,b_size):
  # Write your code here
  if a_size==b_size==0:
    return 1
  a.sort()
  for i in b:
    if(binarySearch(a,0,a_size-1,i)):
      return 1
    else:
      return 0
*/
