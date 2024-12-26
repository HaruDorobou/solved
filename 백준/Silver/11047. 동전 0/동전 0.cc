#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    
    int n, k;
    cin >> n >> k;

    vector<int> coins(n);

    for(int i = 0; i < n; i++) cin >> coins[i];

    int coin = 0;
    if(k == 1) {
        cout << 1;
        return 0;
    }

    while(k != 0)
    {   
        auto it = coins.begin();
        while(it != coins.end())
        {
            if(*it > k) break;
            else { it++; }
        }

        coin += k / *(it-1);
        k %= *(it-1);
    }

    cout << coin;
}