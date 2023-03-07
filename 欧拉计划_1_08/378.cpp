#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> str;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            str.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!str.empty() && str.top() == '(')
            {
                str.pop();
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (s[i] == ']')
        {
            if (!str.empty() && str.top() == '[')
            {
                str.pop();
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (s[i] == '}')
        {
            if (!str.empty() && str.top() == '{')
            {
                str.pop();
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if (str.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}