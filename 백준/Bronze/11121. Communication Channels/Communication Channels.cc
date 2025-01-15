#include <iostream>

using namespace std;

int main()
{   
    int n; cin >> n;
    string a, b;
    while(n--)
    {
        cin >> a >> b;
        cout << (a == b ? "OK" : "ERROR") << '\n';
    }

    return 0;
}