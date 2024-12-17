#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    
    vector<bool> sieve(m + 1, true);
    sieve[0] = false; sieve[1] = false;

    for(int i = 0; i * i <= m; i++)
    {
        if(sieve[i]) {
            for(int j = i * i; j <= m; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    for(int i = n; i <= m; i++)
        if(sieve[i]) cout << i << '\n';
}
