#include <iostream>

using namespace std;

int main()
{
    int A, B, cnt = 0; cin >> A >> B;
    while(A > 0 && B > 0)
    {
        A -= 2;
        B--;
        if(A < 0 || B < 0) break;
        cnt++;
    }

    cout << cnt;
}
