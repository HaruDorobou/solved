#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> s;
    int cnt = 0;

    while (s.find("pPAp") != string::npos)
    {
        auto it = s.find("pPAp");
        
        s = s.substr(it + 4);
        cnt++;
    }

    cout << cnt;
    return 0;
}
