#include <bits/stdc++.h>
using namespace std;

// Approach-1
void expandString(char *str, char *res) {
  // Write your code here
  int i,c=0,k=0,l=strlen(str),count=1;
  char temp[l]; // for storing count of a letter
  for(i=0;i<l;i++){
    // storing current character 
    char ch=str[i];
    k=0;
    count=1;  // for counting frequency of current letter
    // checking for next character to be a digit (0-9)
    while(i+1<l && str[i+1]>='0' && str[i+1]<='9'){
      temp[k]=str[i+1]; // storing digit
      k++;
      i+=1;
    }
    temp[k]='\0';
    if(strlen(temp)<=0)
    	res[c++]=ch;
    else{
      count=atoi(temp); // converting string to int
      while(count){
        res[c]=ch;  // storing current character
        c++;
        count--;
      }
    }
    res[c]='\0';
  }
}

int main() {
   char str[] = "a2b3c2de";
   char res[100000];
   expandString(str, res);
   cout << res;
   return 0;
}
