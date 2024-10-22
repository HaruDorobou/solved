#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x, y;
    x = (a + b + c + d) / 60;
    y = (a + b + c + d) % 60;

    cout << x << '\n' << y;
    return 0;
}