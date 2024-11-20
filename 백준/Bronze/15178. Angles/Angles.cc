#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int n1, n2, n3;

    while (n--)
    {
        cin >> n1 >> n2 >> n3;
        cout << n1 << ' ' << n2 << ' ' << n3 << ' ';
        cout << (n1 + n2 + n3 == 180 ? "Seems OK" : "Check") << '\n';
    }

    return 0;
}