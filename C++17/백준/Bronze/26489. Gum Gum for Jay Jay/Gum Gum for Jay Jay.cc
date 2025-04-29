#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    string s;
    int cnt = 0;
    while(getline(cin, s)) cnt++;
    
    cout << cnt;
}