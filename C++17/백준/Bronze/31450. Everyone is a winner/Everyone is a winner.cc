#include <iostream>
using namespace std;
int main()
{
    long long m, k; cin >> m >> k;
    cout << (m % k != 0 ? "No" : "Yes");
}