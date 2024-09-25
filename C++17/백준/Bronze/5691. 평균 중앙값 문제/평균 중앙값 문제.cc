#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b)
    {
        if (a == b && a == 0)
            return 0;

        c = 2 * a - b;
        cout << c << '\n';
    }
}
