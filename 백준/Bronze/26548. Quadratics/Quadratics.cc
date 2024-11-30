#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        long double a, b, c;
        cin >> a >> b >> c;

        long double resPlus = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
        long double resMinus = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

        resPlus = round(resPlus * 1000) / 1000;
        resMinus = round(resMinus * 1000) / 1000;
        cout << fixed << setprecision(3) << resPlus << ", " << resMinus << '\n';
    }
}