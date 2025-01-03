#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int tc; cin >> tc;
    if(tc == 1) { cout << 1; return 0; }
    if(tc == 2) { cout << 2; return 0; }
    vector<int> dp(tc + 1);

    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= tc; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    
    cout << dp[tc];
}
