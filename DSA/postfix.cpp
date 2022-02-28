/* pop(),push(int j) already defined in stack */
#include<math.h>
int evalPostfix(CQStack *stack,string exp){
    for(int i=0;i<exp.length();i++){
      if(exp[i]>='0' && exp[i]<='9')
        stack->push(exp[i]-'0');
      else{
        int x=stack->pop(), y=stack->pop();
        switch(exp[i])
        {
          case '+': stack->push(y+x); break;
          case '-': stack->push(y-x); break;
          case '*': stack->push(y*x); break;
          case '/': stack->push(y/x); break;
          case '^': stack->push(pow(y,x)); break;
        }
      }
    }
  return stack->pop();
}
