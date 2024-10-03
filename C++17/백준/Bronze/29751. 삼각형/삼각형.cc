#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double W, L;
    cin >> W >> L;

    double a = (double) W * L / 2.0;

    cout << fixed << setprecision(1) << a;

    return 0;
}
