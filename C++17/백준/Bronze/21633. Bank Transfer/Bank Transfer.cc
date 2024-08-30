#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long k;
    cin >> k;

    double fee;

    fee = 25 + k * 0.01;

    cout << fixed << setprecision(2) << (fee > 2000 ? 2000.00 : (fee < 100 ? 100.00 : fee));
}
