#include <iostream>
#include <string.h>
#include<cstdio>
using namespace std;

// Appoach-1 (Auxiliary String)
void compressString(char *str, char *res, int n)
{
  int i=0,j=0;
  for (i=0; i<n; i++)
  {
	int count = 1;
    res[j] = str[i];
    j++;
    while (i+1 < n && str[i] == str[i+1])
    {
      count++;
      i++;
    }
    if (count > 1)
    {
      char temp[50];
      sprintf(temp, "%d", count);
      for (int k = 0; k < strlen(temp); k++)
      {
        res[j] = temp[k];
        j++;
      }
    }
  }
  res[j] = '\0';
}

// Approach-2 (Inplace)
void compressString(char *str, int n)
{
  int i, j=0;
  for (i=0; i<n; i++)
  {
    int count = 1;
    str[j] = str[i];
    j++;
    while (i+1 < n && str[i] == str[i+1])
    {
      count++;
      i++;
    }
    if (count > 1)
    {
      char temp[50];
      sprintf(temp, "%d", count);
      for (int k = 0; k < strlen(temp); k++)
      {
        str[j] = temp[k];
        j++;
      }
    }
  }
  str[j] = '\0';
}

// Approach-3
string compressString(string str){
  // Write your code here
  string s="";
  int c=1,l=str.size();
  for(int i=0;i<l;i++){
    if(str[i]==str[i+1])
      c+=1;
    else{
      if(c==1)
		s=s+str[i];
        //cout<<str[i];
      else
        s=s+str[i]+to_string(c);
      	//str.replace(i,0,to_string(c));
        //cout<<str[i]+to_string(c);
        c=1;
    }
  }
  //cout<<str;
  return s;
}

int main() {
    char str[] = "aabbbccde";
    int n = strlen(str);
    char res[n+1];
    compressString(str, res, n);
    cout << res;
    return 0;
}
