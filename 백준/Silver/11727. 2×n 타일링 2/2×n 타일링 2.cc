#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    
    int tc; cin >> tc;
    if(tc == 1) { cout << 1; return 0; }
    if(tc == 2) { cout << 3; return 0; }
    
    vector<int> dp(tc + 1);

    dp[1] = 1;
    dp[2] = 3;

    for(int i = 3; i <= tc; i++)
        dp[i] = (dp[i-1] + 2 * dp[i-2]) % 10007;
    
    cout << dp[tc];
}
