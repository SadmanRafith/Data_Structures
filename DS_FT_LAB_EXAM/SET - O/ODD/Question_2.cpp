
#include<iostream>
#include<stack>
using namespace std;

//operators
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

//fucntion to covert infix to postfix
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

        //encounter the open parenthesis
        else if(infixexpression[i]=='('){
            s.push(infixexpression[i]);
            i++;
        }

        //encounter the close parenthesis
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

    cout << "\n";
    cout << "The infix expression is      : " << infixexpression << "\n";
    cout << "The postfix expression is    : " << postfixexpression << "\n";
    return postfixexpression;
}




//fucntion for converting postfix to prefix






int main()
{

    cout << "Question - 2 Odd PC" << "\n";
    cout << "----------------------------------" << "\n";

    string infixexpression = "4*6-(9-1)/5";
    string postfixexpression;

    //function call
    postfixexpression = PostfixConverter(infixexpression);

    return 0;
}
