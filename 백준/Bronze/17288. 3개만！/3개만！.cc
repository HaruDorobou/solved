#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int cnt = 0;

    auto it = s.begin();

    // 2 3 1 2 3 8 5 6 7 8 2 4 6 7 3 9 2

    while (it != s.end())
    {
        if (*it - '0' + 1 > *(it + 1) - '0')
        {
            it++;
            continue;
        }
        else if (*it - '0' + 1 != *(it + 1) - '0')
        {
            it++;
            continue;
        }
        else
        {
            if ((*it + 1) - '0' + 1 != (*(it + 2)) - '0')
            {
                it++;
                continue;
            }
            else if (*(it + 2) - '0' + 1 == *(it + 3) - '0')
            {
                it += 4;
                continue;
            }
            else
            {
                cnt++;
                it += 3;
            }
        }
    }

    cout << cnt;
    return 0;
}
