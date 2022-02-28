// Approach-1 (Two pointers)
bool pairSum(vector <int> arr, int n, int k){
  // Write your code here
  sort(arr.begin(),arr.end());
  int l=0,r=arr.size()-1;
  while(l<=r)
  {
    if(arr[l]+arr[r]==k)
      return true;
    else if(arr[l]+arr[r]<k)
      l++;
    else
      r--;
  }
  return false;
}

// Approach-2 (Hash Set)
bool pairSum(vector <int> arr, int n, int k){
  // Write your code here
  int i;
  set <int> s;
  for(auto i:arr)
  {
    if(s.find(k-i)!=s.end())
      return true;
    s.insert(i);
  }
  return false;
}
