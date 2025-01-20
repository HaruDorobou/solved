#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int score, sum = 0;
    vector<pair<int, int>> v;
    vector<int> vv;

    for(int i = 0; i < 8; i++)
    {
        cin >> score;
        v.emplace_back(score, i + 1);
    }

    sort(v.begin(), v.end(), [](const pair<int, int> a, const pair<int, int> b) { return a.first > b.first; });

    for(int i = 0; i < 5; i++)
    {
        sum += v[i].first;
        vv.emplace_back(v[i].second);
    }

    sort(vv.begin(), vv.end());

    cout << sum << '\n';

    for(int i : vv) cout << i << ' ';
    return 0;
}