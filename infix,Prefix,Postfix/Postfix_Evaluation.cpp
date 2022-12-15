#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

float scanNum(char ch){
   int value;
   value = ch;
   return float(value-'0');             //return float from character
}

int CheckOperator(char ch) {
   if(ch=='+'|| ch=='-'|| ch=='*'|| ch=='/' || ch=='^'){
        return 1;                       //operator
   }
   else{
        return -1;                      //not operator
   }
}

int CheckOperand(char ch){
   //for checking numbers from 0 to 9
   if(ch>='0' && ch<='9'){
        return 1;                       //character is operand
   }
   else{
        return -1;                      //character is not an operand
   }
}


float Process(int a, int b, char op){
   //Perform operation
   if(op == '+'){
        return b+a;
   }
   else if(op == '-'){
        return b-a;
   }
   else if(op == '*'){
        return b*a;
   }
   else if(op == '/'){
        return b/a;
   }
   else if(op == '^'){
        return pow(b,a);                //find b^a
   }
   else{
        return INT_MIN;                 //return negative infinity
   }
}



float postfixVal(string postfix){
   int a, b;
   stack<float> stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++){


      //for reading elements and perform postfix evaluation
      if(CheckOperator(*it) != -1){
         a = stk.top();
         stk.pop();
         b = stk.top();
         stk.pop();
         stk.push(Process(a, b, *it));
      }
      else if(CheckOperand(*it) > 0){
         stk.push(scanNum(*it));
      }
   }
   return stk.top();
}

int main(){

   string postfixexpression = "24*63-3/+";

   cout << "\n|-----------------------------------------------------------------------|\n";
   cout << "The postfix expression is          : " << postfixexpression << "\n";
   cout << "The result is                      : " << postfixVal(postfixexpression);
}
