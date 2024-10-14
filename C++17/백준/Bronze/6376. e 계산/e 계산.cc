#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

long double cal(int n)
{
    long double result = 0;

    for (int i = 0; i <= n; i++)
    {
        result += (1.0L / factorial(i));
    }

    return result;
}

int main()
{
    cout << "n e" << '\n';
    cout << "- -----------" << '\n';

    for (int i = 0; i <= 9; i++)
    {
        long double result = cal(i);
        if(i <= 1)
            cout << i << ' ' << fixed << setprecision(0) << result << '\n';
        else if (i == 2)
            cout << i << ' ' << fixed << setprecision(1) << result << '\n';
        else
            cout << i << ' ' << fixed << setprecision(9) << result << '\n';
    }

    return 0;
}