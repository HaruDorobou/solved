#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int k, d1, d2;
    cin >> k >> d1 >> d2;

    if (d1 == d2)
    {
        cout << k * k;
    }
    else
    {
        float diff = (float)(d1 - d2) / 2;
        cout << fixed << setprecision(6) << k * k - diff * diff;
    }
}
