#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double d1, d2, x;
    cin >> d1 >> d2 >> x;

    double higher_d = max(d1, d2);
    double smaller_d = min(d1, d2);

    double v1 = (x / 100.0) / higher_d; 
    double v2 = ((100 - x) / 100.0) / smaller_d;
    
    double density = 1.0 / (v1 + v2);

    cout << fixed << setprecision(6) << density;

    return 0;
}