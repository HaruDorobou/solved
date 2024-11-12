#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n;
    map<string, int> m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        m[s] = 0;
    }

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);

        istringstream iss(line);

        string s;
        while (iss >> s)
        {
            m[s]++;
        }
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const auto &a, const auto &b)
        {   if(a.second == b.second)
                return a.first < b.first;
            return a.second > b.second; 
        });

    for (const auto &[x, y] : v)
    {
        cout << x << ' ' << y << '\n';
    }

    return 0;
}