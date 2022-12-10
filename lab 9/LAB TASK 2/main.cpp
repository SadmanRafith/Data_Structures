#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

float scanNum(char ch)
{
   int value;
   value = ch;
   return float(value-'0');
}

int CheckOperator(char ch)
{
   if(ch=='+'|| ch=='-'|| ch=='*'|| ch=='/' || ch=='^')
   {
        return 1;
   }
   else
   {
        return -1;
   }
}

int CheckOperand(char ch)
{
   if(ch>='0' && ch<='9')
   {
        return 1;
   }
   else
   {
        return -1;
   }
}


float Process(int a, int b, char op)
{

   if(op == '+')
   {
        return b+a;
   }
   else if(op == '-')
   {
        return b-a;
   }
   else if(op == '*')
   {
        return b*a;
   }
   else if(op == '/')
   {
        return b/a;
   }
   else if(op == '^')
   {
        return pow(b,a);
   }
   else
   {
        return INT_MIN;
   }
}


float postfixVal(string postfix)
{
   int a, b;
   stack<float> stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++)
    {
      if(CheckOperator(*it) != -1)
     {
         a = stk.top();
         stk.pop();
         b = stk.top();
         stk.pop();
         stk.push(Process(a, b, *it));
      }
      else if(CheckOperand(*it) > 0)
      {
         stk.push(scanNum(*it));
      }
   }
   return stk.top();
}

int main()
{
   string postfixexpression = "24*63-3/+";

   cout << "\n|-----------------------------------------------------------------------|\n";
   cout << "The postfix expression is          : " << postfixexpression << "\n";
   cout << "The result is                      : "<<postfixVal(postfixexpression);
}
