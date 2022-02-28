#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

// Approach-1 (Stack)
int minReversal(string expr) {
   int len = expr.length();
   if (len % 2)
       return -1;
      
   stack < char > s;
  
   for (int i = 0; i < len; i++) {
       if (expr[i] == ']' && !s.empty()) {
           if (s.top() == '[')
               s.pop();
           else
               s.push(expr[i]);
       } else
           s.push(expr[i]);
   }
  
   int count = s.size();
  
   float m, n = 0;
   while (!s.empty() && s.top() == '[') {
       n++;
       s.pop();
   }
   m = count - n;
   return (ceil(m / 2) + ceil(n / 2));
}
 
// Approach-2 (W/O Stack)
int minReversal(string expr)
{
   int len = expr.length();
   if (len % 2)
       return -1;
      
   float opening = 0, closing = 0;
  
   for (int i = 0; i < len; i++)
   {
       if ( expr[i] == '[' )
       {
           opening++;
       }
       else
       {
           if (opening == 0)
               closing++;
           else
               opening--;
       }
   }
   return ceil(opening / 2) + ceil(closing / 2);
}

int main() {
   string expr = "[]]]][[]][[[";
   cout << minReversal(expr);
   return 0;
}
