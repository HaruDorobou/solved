#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareCoordinate(const pair<int, int> &a, const pair<int,int> &b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int n;
    vector<pair<int, int>> pair_set;

    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        pair_set.emplace_back(x, y);
    }

    sort(pair_set.begin(), pair_set.end(), compareCoordinate);

    // cout << "RESULT \n";
    for (auto &p : pair_set)
    {
        cout << p.first << " " << p.second << '\n';
    }
}