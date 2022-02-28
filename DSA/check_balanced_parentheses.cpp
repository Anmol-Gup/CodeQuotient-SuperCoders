int notBracket(char ch)
{
  if(ch=='(' || ch=='{' || ch=='[' || ch==')' || ch=='}' || ch==']')
    return 0;
  return 1;
}
int balancedString(string s){
	// Write your code here  
  stack <char> st;
  int i;
  for(i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='{')
      st.push(s[i]);
    else if(notBracket(s[i]))
      continue;
    else if(st.empty())
      return i;
    else{
      switch(st.top())
      {
        case '(' : if(s[i]!=')')
        			return i;
          		   break;
        case '[' : if(s[i]!=']')
        			return i;
          		   break;
        case '{' : if(s[i]!='}')
        			return i;
          		   break;
      }
      st.pop();
    }
  }
  if(!st.empty())
    return i;
  return -1;
}
