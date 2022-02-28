bool isUniqueChars(string str){
  // Write your code here
  map <char, int> m;
  for(char ch:str)
  {
    if(m.find(ch)!=m.end())
      m[ch]+=1;
    else
      m[ch]=1;
  }
  for(auto it=m.begin();it!=m.end();it++)
  {
    if(it->second>1)
      return false;
  }
  return true;
}
