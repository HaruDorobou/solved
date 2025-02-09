#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(const auto &i : v) cout << i << ' ';
}