#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a, b;
        cin >> a >> b;

        double dist = max(a, b) - min(a, b);
        double result = round(dist * 10) / 10;

        cout << fixed << setprecision(1) << result << '\n';
    }

    return 0;
}