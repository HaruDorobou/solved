#include <iostream>

using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int q = 0, d = 0, n = 0;
        int m; cin >> m;
        
        if(m >= 25)
        {
            q = m / 25;
            m %= 25;
        }

        if(m >= 10)
        {
            d = m / 10;
            m %= 10;
        }

        if(m >= 5)
        {
            n = m / 5;
            m %= 5;
        }
        cout << q << ' ' << d << ' ' << n << ' ' << m << '\n';    
    }
}