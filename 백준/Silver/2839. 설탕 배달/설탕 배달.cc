#include <iostream>
#include <vector>

using namespace std;

int minDecomposition(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i >= 3 && dp[i - 3] != -1)
            dp[i] = dp[i - 3] + 1;

        if (i >= 5 && dp[i - 5] != -1)
            if (dp[i] == -1 || dp[i - 5] + 1 < dp[i])
                dp[i] = dp[i - 5] + 1;
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    cout << minDecomposition(n);
    return 0;
}