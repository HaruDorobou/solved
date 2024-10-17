#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double d1, d2, pi = 3.141592;
    cin >> d1 >> d2;

    double ans = (2.0 * d1) + (2.0 * pi * d2);

    cout << fixed << setprecision(6) << ans;

    return 0;
}