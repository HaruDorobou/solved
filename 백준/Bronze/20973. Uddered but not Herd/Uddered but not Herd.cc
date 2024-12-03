#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> v1, v2;
    string s1, s2;
    cin >> s1 >> s2;

    for (char c : s1)
        v1.emplace_back(c);

    for (char c : s2)
        v2.emplace_back(c);

    int cnt = 1;
    auto iter1 = v1.begin();
    auto iter2 = v2.begin();

    while (1)
    {
        if (iter2 == v2.end())
            break;

        if (find(iter1, v1.end(), *iter2) != v1.end())
        {
            iter1 = find(iter1, v1.end(), *iter2) + 1;
            iter2++;
            continue;
        } else {
            iter1 = v1.begin();
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}