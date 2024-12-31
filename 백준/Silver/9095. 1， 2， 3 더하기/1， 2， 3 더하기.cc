#include <iostream>
#include <vector>

using namespace std;

void setDp(vector<int> &dp)
{
    dp[0] = 1;
    for(int i = 1; i <= 11; i++)
    {
        if(i >= 1) dp[i] += dp[i - 1];
        if(i >= 2) dp[i] += dp[i - 2];
        if(i >= 3) dp[i] += dp[i - 3];
    }
} 

int main() 
{   
    vector<int> dp(12);
    setDp(dp);

    int n; cin >> n;
    while(n--)
    {
        int num; cin >> num;
        
        cout << dp[num] << '\n';
    }
}