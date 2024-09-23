#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main()
{
    int n;
    queue<int> que;
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
            que.push(val);
        }

        if (comm == "pop")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            else
            {
                cout << que.front() << '\n';
                que.pop();
            }
        }

        if (comm == "size")
        {
            cout << que.size() << '\n';
        }

        if (comm == "empty")
        {
            cout << (que.empty() ? 1 : 0) << '\n';
        }

        if (comm == "front")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            else
            {
                cout << que.front() << '\n';
            }
        }
        if (comm == "back")
        {
            if (que.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            else
            {
                cout << que.back() << '\n';
            }
        }        
    }
}