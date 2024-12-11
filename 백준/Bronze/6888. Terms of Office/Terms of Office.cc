#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "All positions change in year " << x << '\n';

    while (x <= y)
    {
        x += 60;

        if(x > y) break;
        cout << "All positions change in year " << x << '\n';
    }
    return 0;
}