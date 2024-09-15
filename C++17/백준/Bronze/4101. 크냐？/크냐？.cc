#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while(1)
    {
        cin >> a >> b;        
        if ( a == b && a == 0) { break; }
        
        cout << (a > b ? "Yes" : "No") << '\n';
    }
}