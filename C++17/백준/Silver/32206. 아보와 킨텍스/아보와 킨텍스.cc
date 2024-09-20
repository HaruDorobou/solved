#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    string word;
    cin >> n >> word;

    cnt = (26 * (n + 1)) - n;

    cout << cnt;
}