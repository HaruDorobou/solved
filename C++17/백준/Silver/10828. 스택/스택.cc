#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    int n;
    stack<int> stk;
    string line;

    cin >> n;
    cin.ignore();

    while (n--)
    {
        getline(cin, line);
        istringstream iss(line);

        string comm;
        int val;

        iss >> comm >> val;

        if (comm == "push")
        {
            stk.push(val);
        }

        if (comm == "pop")
        {
            if (stk.empty())
            {
                cout << -1 << '\n';
                continue;    
            }
            else
            {
                cout << stk.top() << '\n';
                stk.pop();
            }            
        }

        if (comm == "size")
        {
            cout << stk.size() << '\n';
        }

        if (comm == "empty")
        {
            cout << (stk.empty() ? 1 : 0) << '\n';
        }

        if (comm == "top")
        {   
            cout << (stk.empty() ? -1 : stk.top()) << '\n';
        }
    }
}
