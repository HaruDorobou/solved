#include <iostream>

using namespace std;

int main()
{   
    long long r,c,n; cin >> r >> c >> n;
    long long cctv = 0;

    if (r % n == 0 && c % n == 0)
    {
        cctv = (r / n) * (c / n);
    } else if (r % n != 0 && c % n == 0)
    {
        cctv = ((r / n) + 1) * (c / n);
    } else if (r % n == 0 && c % n != 0)
    {
        cctv = (r / n) * ((c / n) + 1);
    } else
    {
        cctv = ((r / n) + 1) * ((c / n) + 1);
    }
    cout << cctv;
}