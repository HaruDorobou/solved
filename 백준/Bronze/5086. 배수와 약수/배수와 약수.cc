#include <iostream>

using namespace std;

int main()
{   
    while(1)
    {
        int n, m; cin >> n >> m;
        if(!n) break;

        if(n > m)
        {
            if(n % m == 0) 
            {
                cout << "multiple" << '\n'; 
                continue;
            }
        } else
        {
            if(m % n == 0) 
            {
                cout << "factor" << '\n';
                continue;
            }
        } 
        
        cout << "neither" << '\n';
    }
}