#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while(n--)
    {   
        map<string, int> m1;
        map<string, int> m2;

        int m; cin >> m;
        string s;
        for(int i = 0; i < m; i++)
        {   
            cin >> s;
            m1[s]++;
        }

        for(int i = 0; i < m; i++)
        {
            cin >> s;
            m2[s]++;
        }

        bool cheater = true;
        auto m1it = m1.begin();
        auto m2it = m2.begin();
        while(m1it != m1.end())
        {
            auto p1 = *m1it;
            auto p2 = *m2it;
            if(p1.first != p2.first) 
            {
                cheater = false;
                break;
            }

            if(p1.second != p2.second)
            {
                cheater = false;
                break;
            }
            
            m1it++;
            m2it++;
        }

        if(cheater)
            cout << "NOT CHEATER" << '\n';
        else
            cout << "CHEATER" << '\n';
    }
}