#include <stdio.h>
#include<string.h>

int countWords(char str[]) {
   int count = 0;
   int inWord = 0;
   for (int i=0; i<strlen(str); i++) {
       if (str[i] == ' ')
           inWord = 0;
       else if (inWord == 0) {
           count++;
           inWord = 1;
       }
   }
   return count;
}
int main(){
   char str[] = "CodeQuotient get better   at coding";
   printf("%d", countWords(str));
   return 0;
}
