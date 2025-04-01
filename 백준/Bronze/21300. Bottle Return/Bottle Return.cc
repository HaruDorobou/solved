#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int cnt = 0;
    for(int i = 0; i < 6; i++)
    {
        int j; cin >> j;
        cnt += j * 5;
    }

    cout << cnt;
}