#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n1, n2;

    while(t--)
    {
        cin >> n1 >> n2;

        if (n1 == n2 == 1)
        {
            cout << 3 << '\n';
        } else
        {
            cout << 1 << '\n';
        }
    }

    return 0;
}