bool areBracketsBalanced(char exp[]) {
  // Write your code here
  stack <char> st;
  for(int i=0;i<strlen(exp);i++){
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
      st.push(exp[i]);
    else if(exp[i]>='0' && exp[i]<='9')
      continue;
    else if(exp[i]>='A' && exp[i]<='Z')
      continue;
    else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='%')
      continue;
    else if(st.empty())
      return false;
    else
    {
      char ch=st.top();
      switch(ch)
      {
        case '[': if(exp[i]!=']')
          			return false;
          		  break;
        case '(': if(exp[i]!=')')
          			return false;
          		  break;
        case '{': if(exp[i]!='}')
          			return false;
          		  break;
      }
      st.pop();
    }
  }
  if(st.empty())
    return true;
  else
    return false;
