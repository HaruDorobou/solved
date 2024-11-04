#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<int, pair<int, int>>> max_val_line;
    vector<pair<int, pair<int, int>>> max_cand;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int number;
            cin >> number;

            max_val_line.emplace_back(number, make_pair(i, j));
        }

        auto max_iter = max_element(max_val_line.begin(), max_val_line.end(),
                                    [](const auto &a, const auto &b)
                                    { return a.first < b.first; });

        int max_value = max_iter->first;

        max_cand.emplace_back(max_value, max_iter->second);

        max_val_line.clear();
    }

    auto max_iter = max_element(max_cand.begin(), max_cand.end(),
                                [](const auto &a, const auto &b)
                                { return a.first < b.first; });
    
    auto [x, y] = max_iter->second;

    cout << max_iter->first << '\n' << x + 1 << ' ' << y + 1;

    return 0;
}