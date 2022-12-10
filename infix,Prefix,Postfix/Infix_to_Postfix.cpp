
#include<iostream>
#include<stack>
using namespace std;

//functions for encounter of each operators
int Precedence(char value){
    if(value=='+' || value=='-'){
        return 1;
    }
    if(value=='*' || value=='/'){
        return 2;
    }
    if(value=='^'){
        return 3;
    }
    return 0;
}

string PostfixConverter(string infixexpression){
    int i=0;
    string postfixexpression="";

    //using stack library
    stack<int> s;

    while(infixexpression[i]!='\0'){                   //in terms of character

        //adding characters to stack
        if(infixexpression[i]>='a' && infixexpression[i]<='z'|| infixexpression[i]>='A'&& infixexpression[i]<='Z' || infixexpression[i]>='0' && infixexpression[i]<='9'){
            postfixexpression += infixexpression[i];
            i++;
        }

        //when encounter the open parenthesis
        else if(infixexpression[i]=='('){
            s.push(infixexpression[i]);
            i++;
        }

        //when encounter the close parenthesis
        else if(infixexpression[i]==')'){
            while(s.top()!='('){
                postfixexpression += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }

        else{
            while(!s.empty() && Precedence(infixexpression[i]) <= Precedence(s.top())){
                postfixexpression += s.top();
                s.pop();
            }
            s.push(infixexpression[i]);
            i++;
        }
    }

    while(!s.empty()){
        postfixexpression += s.top();
        s.pop();
    }

    cout << "\n|-----------------------------------------------------------------------|\n";
    cout << "The infix expression is            : " << infixexpression << "\n";
    cout << "The postfix expression is          : " << postfixexpression << "\n";
    return postfixexpression;
}

int main()
{
    string infixexpression = "2*4+(6-3)/3";
    string postfixexpression;

    //function call
    postfixexpression = PostfixConverter(infixexpression);

    return 0;
}
