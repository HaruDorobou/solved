#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{      
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<int> dp(50001, 987654321);

    dp[0] = 0;

    for(int i = 1; i < 50001; i++)
    {
        for(int j = 1; j * j <= i; j++)
            dp[i] = min(dp[i], dp[i-j*j] + 1);
    }

    int num; cin >> num;
    cout << dp[num];
}
