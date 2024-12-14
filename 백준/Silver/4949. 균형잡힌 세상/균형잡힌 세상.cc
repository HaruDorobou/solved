#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s == ".") break;

        stack<char> stk;
        bool check = true;
        for (char c : s)
        {
            if (c == '(' || c == '[')
                stk.push(c);
            else if (c == ')' || c == ']')
            {
                if (stk.empty() || (c == ')' && stk.top() != '(') || (c ==']' && stk.top() != '[')) 
                {
                    check = false;
                    break;
                }
                stk.pop();
            }
        }
        if (check && stk.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}