#include <iostream>

using namespace std;

int main()
{
    int res = 0;
    int n;

    while(1) {
        cin >> n;
        if( n == -1 ) break;

        res += n;
    }

    cout << res;
}