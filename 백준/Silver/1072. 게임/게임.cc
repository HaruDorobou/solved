#include <iostream>

using namespace std;

long long binarySearch(long long x, long long y)
{
    long long left = 1, right = 1000000000;

    int z1 = y * 100 / x;

    if(z1 >= 99) return -1;

    while(left <= right)
    {   
        long long mid = (left + right) / 2;
        int z2 = (y + mid) * 100 / (x + mid);

        if(z1 < z2) right = mid - 1;
        else left = mid + 1;
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, y; cin >> x >> y;

    if(x == y) { cout << -1; return 0; }
    cout << binarySearch(x, y);
}  