#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    unordered_map<int, int> mp;
    for(int i = 0; i < t; i++) { int n; cin >> n; mp[n]++; }

    int m; cin >> m;
    while(m--) { int n; cin >> n; cout << mp[n] << ' '; }
}
