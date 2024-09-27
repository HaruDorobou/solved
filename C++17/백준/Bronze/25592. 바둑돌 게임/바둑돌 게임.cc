#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << '0';
        return 0;
    }

    int cnt = 1;
    int total = n;

    while (total > cnt)
    {
        total -= cnt;
        cnt++;
    }

    if (cnt % 2 == 1 && cnt >= total)
    {
        cout << cnt - total;
    }

    else if (cnt == total)
    {
        cout << cnt + 1;
    }

    else 
    {
        cout << '0';
    }

    return 0;
}
