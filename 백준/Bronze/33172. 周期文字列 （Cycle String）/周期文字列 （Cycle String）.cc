#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; string s; cin >> n >> s;

    bool isCycle = 0;
    for(int len = 1; len <= n / 2; len++)
    {
        if(n % len == 0 && n / len >= 2)
        {
            bool valid = 1;
            string pattern = s.substr(0, len);

            for(int i = len; i < n; i += len)
            {
                if(s.substr(i, len) != pattern)
                {
                    valid = 0;
                    break;
                }
            }

            if(valid)
            {
                isCycle = 1;
                break;
            }
        }
    }
    cout << (isCycle ? "Yes" : "No"); return 0;
}