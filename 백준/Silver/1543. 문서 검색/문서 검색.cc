#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(1);
    cin.tie(nullptr);
    
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int cnt = 0;

    int i = s1.find(s2);

    while(1)
    {
        auto i = s1.find(s2);
        if(i == string::npos)
            break;
        cnt++;
        s1 = s1.substr(i + s2.length());
    }
    cout << cnt;
}