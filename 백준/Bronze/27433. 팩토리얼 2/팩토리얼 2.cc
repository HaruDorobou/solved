#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long fac = 1;
    int n; cin >> n;
    if(n == 0)
    {
        cout << 1;
        return 0;
    }

    for(int i = 0; i < n; i++)
        fac *= n - i;
    
    cout << fac;
    return 0;
}