#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L;
    cin >> L;

    cout << (L % 5 == 0 ? (L / 5) : (L / 5) + 1);

    return 0;
}
