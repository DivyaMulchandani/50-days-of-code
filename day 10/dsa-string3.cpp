// valid parantheses

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s = "()";
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(c);
                break;
            }
        }
        else if (c == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(c);
                break;
            }
        }
        else if (c == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(c);
                break;
            }
        }
    }
    if (st.empty())
    {
        cout << "Valid Parentheses";
    }
    else
    {
        cout << "Not valid Parentheses";
    }

    return 0;
}