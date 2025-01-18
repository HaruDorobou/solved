#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<long long> dp(91);

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i < 91; i++)
        dp[i] = dp[i-2] + dp[i-1];
    
    int n; cin >> n;
    cout << dp[n];

    return 0;
}