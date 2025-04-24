#include <iostream>

using namespace std;

int main() 
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    string s; cin >> s;
    if(s.size() < 2)
    {
        cout << (s[0] - '0') + (s[1] - '0');
    }
    else
    {
        if(s[s.size() - 1] == '0')
        {
            int i = stoi(s.substr(0, s.size() - 2));
            cout << i + 10;
        }
        else 
        {   
            int i = stoi(s.substr(0, s.size() - 1));
            int j = s[s.size() - 1] - '0';
            cout << i + j;
        }
    }
}