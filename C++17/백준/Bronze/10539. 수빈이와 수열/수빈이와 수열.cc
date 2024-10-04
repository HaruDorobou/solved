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

    // 3 2 3 5 (vb)
    // 3 x y z (va)

    // (3 + x) / 2 = 2
    // 3 + x = 4
    // x = 1

    // vs[0] = 3
    // vs[1] = 4

    // (3 + 1 + y) / 3 = 3
    // 4 + y = 9
    // y = 5

    // (3 + 1 + 5 + z) / 4 = 5
    // 9 + z = 20
    // z = 11

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

        // x(va[1]) = (2(vb[1]) * 2(i)) - 3(va[0])
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
