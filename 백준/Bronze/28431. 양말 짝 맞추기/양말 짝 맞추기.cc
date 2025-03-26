#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    unordered_map<int, int> m;
    for(int i = 0; i < 5; i++)
    {
        int n; cin >> n;
        m[n]++;
    }

    for(auto &p : m)
    {
        if(p.second % 2 != 0) cout << p.first;
    }
}