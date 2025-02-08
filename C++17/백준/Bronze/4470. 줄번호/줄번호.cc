#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin >> n; cin.ignore();
    
    string line = "";
    for(int i = 1; i <= n; i++)
    {    
        getline(cin, line);
        cout << i << ". " << line << '\n';
    }
}