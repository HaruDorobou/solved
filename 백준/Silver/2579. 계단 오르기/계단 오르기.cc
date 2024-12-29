#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int score(vector<int> &stairs)
{
    int n = stairs.size();
    if (n == 0) return 0;
    if (n == 1) return stairs[0];
    if (n == 2) return stairs[0] + stairs[1];
    
    vector<vector<int>> dp(n, vector<int>(3, 0));
    
    dp[0][1] = stairs[0];
    dp[1][1] = stairs[1];  
    dp[1][2] = stairs[0] + stairs[1];
    
    for (int i = 2; i < n; i++) 
    {    
        dp[i][1] = max(dp[i-2][1], dp[i-2][2]) + stairs[i];
        dp[i][2] = dp[i-1][1] + stairs[i];
    }
    
    return max(dp[n-1][1], dp[n-1][2]);
}

int main()
{   
    int n; cin >> n;
    vector<int> stairway(n);
    for(int i = 0; i < n; i++) cin >> stairway[i];
    cout << score(stairway);
}
