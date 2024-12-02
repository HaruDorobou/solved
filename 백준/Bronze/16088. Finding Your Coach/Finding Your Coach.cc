#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long l, r, n, m;
        cin >> l >> r >> n >> m;

        long long diff = abs(m - n);
        if (diff == 0)
        {
            cout << 'G' << '\n';
        }
        else if (diff <= l && diff <= r)
        {
            cout << 'E' << '\n';
        }
        else if (diff > r)
        {
            cout << 'L' << '\n';
        } 
        else if (diff > l)
        {
            cout << 'R' << '\n';
        } else
        {
            cout << 'G' << '\n';
        }
    }
    return 0;
}