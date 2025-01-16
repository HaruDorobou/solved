#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{   
    int tc; cin >> tc;
    vector<pair<int, int>> v; 
    for(int i = 0; i < tc; i++)
    {   
        int start, end; cin >> start >> end;
        v.emplace_back(start, end);
    }

    sort(v.begin(), v.end(), comparator);

    int cnt = 1;
    int cur = v[0].second;

    for(int i = 1; i < tc; i++)
    {
        if(v[i].first >= cur)
        {
            cnt++;
            cur = v[i].second;
        }
    }
    cout << cnt;
    return 0;
}