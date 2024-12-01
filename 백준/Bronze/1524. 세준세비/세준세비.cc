#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> s(n);
        vector<int> b(m);
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        if (*max_element(s.begin(), s.end()) == *max_element(b.begin(), b.end()))
        {
            flag = true;
        }
        else if (*max_element(s.begin(), s.end()) > *max_element(b.begin(), b.end()))
        {
            flag = true;
        }
        else
        {
            flag = false;
        }

        if (flag)
            cout << 'S' << '\n';
        else
            cout << 'B' << '\n';
    }
    return 0;
}