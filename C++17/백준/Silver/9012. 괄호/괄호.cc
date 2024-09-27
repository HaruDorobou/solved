#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        stack<char> stk;

        if (s.length() % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }

        for (char c : s)
        {
            if (stk.empty())
                stk.push(c);
            else if (stk.top() == '(' && c == ')')
                stk.pop();
            else
                stk.push(c);
        }

        if (stk.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
