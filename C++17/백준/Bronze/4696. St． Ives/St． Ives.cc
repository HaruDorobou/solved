#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double cal(double n)
{
    return (1 + pow(n, 1) + pow(n, 2) + pow(n, 3) + pow(n, 4));
}

int main()
{
    double n;

    cout << fixed << setprecision(2);

    while (cin >> n)
    {
        if (n == 0)
            break;

        cout << cal(n) << '\n';
    }
}
