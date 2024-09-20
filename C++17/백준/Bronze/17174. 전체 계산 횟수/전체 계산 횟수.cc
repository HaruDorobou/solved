#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;

    while (n > 0)
    {
        cnt += n;
        n = n / m;
    }

    cout << cnt;
}