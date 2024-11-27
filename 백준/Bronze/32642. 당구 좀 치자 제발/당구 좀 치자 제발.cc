#include <iostream>

using namespace std;

int main()
{
    int t;
    long long rage = 0;
    long long rage_sum = 0;
    bool weather;

    cin >> t;

    while (t--)
    {

        cin >> weather;

        (weather ? rage++ : rage--);
        rage_sum += rage;
    }

    cout << rage_sum;
    return 0;
}