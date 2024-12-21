#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> list;
    int n, m; cin >> n >> m;

    string name;
    while(n--)
    {
        cin >> name;
        list[name]++;
    }

    while(m--)
    {
        cin >> name;
        list[name]--;
    }

    int cnt = 0;
    vector<string> names;
    for(const auto &p : list)
    {
        if(p.second == 0) {
            cnt++;
            names.emplace_back(p.first);
        }
    }

    cout << cnt << '\n';
    for(string s : names) cout << s << '\n';
}