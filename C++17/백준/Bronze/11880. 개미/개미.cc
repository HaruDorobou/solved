#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b, c;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        int l = max({a, b, c});
        int rest_sum = a + b + c - l;

        long long result = (long long)l * l + (long long)rest_sum * rest_sum;
        cout << result << '\n';
    }
}