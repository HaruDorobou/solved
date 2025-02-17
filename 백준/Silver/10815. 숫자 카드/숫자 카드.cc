#include <iostream>
#include <cmath>

using namespace std;

long long arr[20000001];

int main()
{
    ios_base::sync_with_stdio(1);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int tc;
    while(n--)
    {
        cin >> tc;
        if(tc < 0) arr[abs(tc)] = 1;
        else arr[tc + 10000000] = 1;
    }
    
    cin >> n;
    while(n--)
    {
        cin >> tc;
        if(tc < 0) tc = abs(tc);
        else tc += 10000000;
    
        if(arr[tc]) cout << 1;
        else cout << 0;
        cout << ' ';
    }
}
