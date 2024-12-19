#include <iostream>
using namespace std;

const int ALL_BITS = (1 << 21) - 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m, s = 0;
    cin >> m;

    while (m--)
    {
        string op; cin >> op;

        if (op == "all")
            s = ALL_BITS;
        else if (op[0] == 'e')
            s = 0;
        else
        {
            int x;
            cin >> x;
            if (op[0] == 'a')
                s |= (1 << x);
            else if (op[0] == 'r')
                s &= ~(1 << x);
            else if (op[0] == 'c')
                cout << ((s & (1 << x)) ? 1 : 0) << '\n';
            else if (op[0] == 't')
                s ^= (1 << x);
        }
    }
}