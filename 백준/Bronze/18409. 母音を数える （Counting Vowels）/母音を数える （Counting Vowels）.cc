#include <iostream>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    string s; cin >> s;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a') cnt++;
        if(s[i] == 'i') cnt++;
        if(s[i] == 'u') cnt++;
        if(s[i] == 'e') cnt++;
        if(s[i] == 'o') cnt++;
    }
    cout << cnt;
}