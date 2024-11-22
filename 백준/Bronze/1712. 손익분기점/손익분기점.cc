#include <iostream>

using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    long long profit = C - B;

    if (profit <= 0)
    {
        cout << -1;
        return 0;
    }

    cout << (A / profit) + 1;
    return 0;
}