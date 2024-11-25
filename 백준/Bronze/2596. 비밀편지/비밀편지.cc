#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> m = {
        {"000000", "A"},
        {"001111", "B"},
        {"010011", "C"},
        {"011100", "D"},
        {"100110", "E"},
        {"101001", "F"},
        {"110101", "G"},
        {"111010", "H"}};

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s, sub, ans = "";
    cin >> n >> s;

    for (int i = 0; i < n * 6; i += 6)
    {
        sub = s.substr(i, 6);
        auto it = m.find(sub);
        if (it != m.end())
        {
            string cha = it->second;
            ans += cha;
        }
        else
        {
            int consistency = 0;
            for (const auto &[key, value] : m)
            {
                for (int i = 0; i < 6; i++)
                {
                    if (sub[i] == key[i])
                        consistency++;
                }
                if (consistency == 5)
                {
                    ans += value;
                    break;
                }
                else
                    consistency = 0;
            }

            if (consistency == 0)
            {
                cout << (i + 6) / 6;
                return 0;
            }
            else
                continue;
        }
    }
    cout << ans;
    return 0;
}