#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

// Approach-1
// return 1 for YES and 0 for NO.
int isRotation(string str1, string str2){
  // Write your code here
  int l1=str1.size(),l2=str2.size(),j,i;
  if(l1!=l2)
    return 0;
  str1=str1+str1;
  int find=str1.find(str2);
  if(find!=string::npos)
    return 1;
  return 0; 
}

int main() {
   string str1 = "codeQuotient";
   string str2 = "Quotientcode";
   if (checkRotation(str1, str2))
       cout<<"Yes";
   else
       cout<<"No";
   return 0;
}
