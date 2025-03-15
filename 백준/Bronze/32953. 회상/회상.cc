#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    unordered_map<int, int> um;

    while(n--)
    {
        int k, student; cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> student;
            um[student]++;
        }
    }
    
    int cnt = 0;
    auto it = um.begin();

    while(it != um.end())
    {
        if(it->second >= m) cnt++;
        it++;
    }

    cout << cnt;
}