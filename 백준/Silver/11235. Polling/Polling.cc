#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string name;
    int n; cin >> n;

    map<string, int> m;

    while(n--)
    {
        cin >> name;
        m[name]++;    
    }

    auto maxPair = max_element(
        m.begin(), m.end(),
        [](const auto &p1, const auto &p2)
        {
            return p1.second < p2.second;
        }
    );

    for(const auto &[name, value] : m)
    {
        if(value == maxPair->second)
            cout << name << '\n';
    }
}