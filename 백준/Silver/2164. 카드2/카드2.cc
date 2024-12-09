#include <iostream>

using namespace std;

long long pow(int exp)
{
    long long res = 2;
    if (exp == 0)
        return 1;

    for (int i = 0; i < exp; i++)
        res *= 2;

    return res;
}

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    int power = 2;
    int power_cnt = 1;

    while (n > power)
    {
        if (n == power)
            return n;

        power = pow(power_cnt);
        power_cnt++;
    }

    if (n == power)
        cout << n;
    else
        cout << (long long)((n - (power / 2)) * 2);

    return 0;
}