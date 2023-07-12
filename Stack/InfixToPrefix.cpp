#include <iostream>
#include <stack>
#include <string>

int getPrecedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

string infixToPrefix(string s)
{

    reverse(s.begin(), s.end());
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] >= 'a' || s[i] <= 'z' || s[i] >= 'A' || s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == "(")
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {

            while (!st.empty && st.top != '(')
            {
                res += st.top;
                st.pop();
            }
            if (!is.empty())
            {
                st.pop();
            }
            else
            {
                while (!st.empty && getPrecedence(st.top()) >= getPrecedence(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.puch(s[i]);
            }
        }
        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());
    }
}

int main()
{
    cout << infixToPrefix("(a-b/c)*(a/k-l)") << endl;
}