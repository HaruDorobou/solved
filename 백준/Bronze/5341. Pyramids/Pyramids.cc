#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(1);
    cin.tie(nullptr);
    
    int n;
    while(cin >> n)
    {
        if(n == 0) return 0;
        int ans = n;
        for(int i = n - 1; i > 0; i--)
            n += i;
        
        cout << n << '\n';
    }
}   