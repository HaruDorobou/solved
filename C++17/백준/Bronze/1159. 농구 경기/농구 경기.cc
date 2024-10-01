#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string chars;

    unordered_map<char, int> player_map;
    set<char> player_list;

    for (size_t i = 0; i < N; i++)
    {
        string name;
        cin >> name;

        player_map[name[0]]++;
    }

    for (const auto &[ch, count] : player_map)
    {
        if (count >= 5)
        {
            player_list.insert(ch);
        }
    }

    if (player_list.empty())
    {
        cout << "PREDAJA";
    }
    else
    {
        for (char ch : player_list)
        {
            cout << ch;
        }
    }

    return 0;
}
