#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, K = 2;
    string s;
    cin >> n >> s;

    set<string> ss;
    bool is_comp = false;

    while (true)
    {
        for (int i = 0; i < s.length() - K + 1; i++)
        {
            if (ss.count(s.substr(i, K)) == 0)
            {
                ss.emplace(s.substr(i, K));
                is_comp = true;
                continue;
            }
            else if (ss.count(s.substr(i, K)) == 1)
            {
                K++;
                is_comp = false;
                break;
            }
        }

        if(is_comp)
        {
            cout << K;
            return 0;
        } else
            ss.clear();
    }
}