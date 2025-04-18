#include <iostream>

using namespace std;

int main() 
{   
    int n; cin >> n;
    cin.ignore();
    while(n--)
    {
        string s; cin >> s;
        cout << (s[0] - '0') + (s[2] - '0') << '\n';
    }
}