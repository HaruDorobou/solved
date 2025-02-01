#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long n; cin >> n;
    
    vector<long long> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        string num = to_string(v[i]);
        reverse(num.begin(), num.end());
        v[i] = stoll(num);
    }

    sort(v.begin(), v.end());
    
    for(long long ll : v)
        cout << ll << '\n';
}