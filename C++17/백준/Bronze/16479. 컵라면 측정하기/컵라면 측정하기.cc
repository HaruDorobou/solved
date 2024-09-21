#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double k, d1, d2;
    cin >> k;
    cin >> d1 >> d2;

    double h = 1;

    h = (k * k) - (((d1 - d2) / 2) * ((d1 - d2) / 2.0)) / h;

    cout << fixed << setprecision(2) << h;
} 
