#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = n / 3;

    cout << (k - 1) * (k - 2) / 2;
}
