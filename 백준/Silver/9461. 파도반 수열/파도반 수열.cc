#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<long long> dp(101);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i <= 101; i++)
        dp[i] = dp[i-2] + dp[i-3];

    int tc; cin >> tc;
    while (tc--)
    {
        int c; cin >> c;
        cout << dp[c] << '\n';
    }
}
