#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vb(n);
    vector<int> va(n);
    vector<int> vs(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vb[i];
    }

    va[0] = vb[0];
    vs[0] = vb[0];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            va[0] = vb[0];
            sum += vb[0];
            vs[0] = sum;
            continue;
        }

        va[i] = vb[i] * (i+1) - vs[i - 1];

        sum += va[i];
        vs[i] = sum;
    }

    for ( int ans : va)
    {
        cout << ans << ' ';
    }
    return 0;
}
