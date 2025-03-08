#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while(n--)
    {
      int m; cin >> m;
      cout << m << ' ' << m << '\n';
    }
}