#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int tc, x, y; cin >> tc;
    long long dist;

    while(tc--)
    {
        cin >> x >> y;
        dist = y - x;
        long long n = (long long)sqrt(dist);
        if(dist <= n * n)
            cout << (2 * n) - 1<< '\n';
        else if(dist <= n * (n + 1))
            cout << 2 * n << '\n';
        else
            cout << 2 * n + 1 << '\n';
    }
    return 0;
}