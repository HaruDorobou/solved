#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int n, m; cin >> n >> m;
    vector<int> v;

    v.emplace_back(1);

    for(int i = 2; i <= n; i++)
        if(n % i == 0) v.emplace_back(i);
    
    if(v.size() < m) cout << 0;
    else cout << v[m - 1];
}