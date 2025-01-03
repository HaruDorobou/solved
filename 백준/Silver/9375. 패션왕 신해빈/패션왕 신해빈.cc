#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc; cin >> tc;

    while(tc--)
    {   
        unordered_map<string, int> m;

        int num, count = 1; cin >> num;

        if(num == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        for(int i = 0; i < num; i++)
        {
            string name, kind; cin >> name >> kind;
            m[kind]++;
        }

        for(const auto &[x, y] : m)
            count *= y + 1;

        cout << count - 1 << '\n';
                
    }
}