#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    map<char, int> chars_map;

    for (size_t i = 0; i < N; i++)
    {
        string name;
        cin >> name;

        chars_map[name[0]]++;
    }

    string chars;

    for (const auto &[ch, count] : chars_map)
    {
        if (count >= 5)
            chars += ch;
    }

    cout << (chars.empty() ? "PREDAJA" : chars);

    return 0;
}
