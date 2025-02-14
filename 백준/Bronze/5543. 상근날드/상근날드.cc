#include <iostream>

using namespace std;

int main()
{
    int b, min, total = 0;
    cin >> b; min = b;
    cin >> b; min = (b < min ? b : min);
    cin >> b; min = (b < min ? b : min);
    total += min;

    cin >> b; min = b;
    cin >> b; min = (b < min ? b : min);
    total += min - 50;
    cout << total;
}
