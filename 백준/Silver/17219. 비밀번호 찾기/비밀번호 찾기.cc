#include <iostream>
#include <map>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    map<string, string> list;

    string site, pw;
    while(n--) 
    {
        cin >> site >> pw;
        list.emplace(site, pw);
    }

    while(m--)
    {
        cin >> site;
        cout << list[site] << '\n';
    }
}