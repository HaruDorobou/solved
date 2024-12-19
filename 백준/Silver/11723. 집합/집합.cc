#include <iostream>
using namespace std;

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
            s = (1 << 21) - 1;
        else if (op == "empty")
            s = 0;
        else
        {
            int x;
            cin >> x;
            if (op == "add")
                s |= (1 << x);
            else if (op == "remove")
                s &= ~(1 << x);
            else if (op == "check")
                cout << ((s & (1 << x)) ? 1 : 0) << '\n';
            else if (op == "toggle")
                s ^= (1 << x);
        }
    }
}