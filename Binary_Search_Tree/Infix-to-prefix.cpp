#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int pre(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else 
    {
        return - 1;
    }
}

string InfixToPrefix(string s)
{
    reverse(s.begin() , s.end());
    stack <char> st;
    string prefix;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            prefix += s[i];
        }
        else if(s[i] == ')')
        {
            st.push(s[i]);
        }
        else if(s[i] == '(')
        {
            while(!st.empty() && st.top() != ')')
            {
                prefix += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            } 
        }
        else
        {
            while (!st.empty() && pre(st.top()) >= pre(s[i]))
            {
                prefix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        
    }
    while(!st.empty())
    {
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin() , prefix.end());
    return prefix;
}

int main(int argc, char const *argv[])
{
    string result, expression;
    cout << "Enter any expression for infix to postfix: ";
    cin >> result;
    expression = InfixToPrefix(result);
    cout << "Ans is: " << expression;
    
    return 0;
}