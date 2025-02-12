#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string target; cin >> target;
    int n; cin >> n;

    cin.ignore();

    string str;
    int cnt = 0;
    while(n--)
    {
        cin >> str; string s = str;
        for(char c : s)
            str += c;
        
        if(str.find(target) != string::npos) cnt++;
    }
    
    cout << cnt;
}