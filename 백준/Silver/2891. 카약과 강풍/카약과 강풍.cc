#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, S, R;
    cin >> N >> S >> R;

    vector<int> teams(N, 1);

    while (S--)
    {
        int team;
        cin >> team;

        teams[team - 1]--; // damaged
    }

    while (R--)
    {
        int team;
        cin >> team;

        teams[team - 1]++; // rest
    }

    for (auto it = teams.begin() + 1; it < teams.end(); it++)
    {
        if (*it > 1 && (*(it - 1) == 0 || *(it + 1) == 0))
        {
            int temp = *it;
            *it = temp - 1;
            if (*(it - 1) == 0)
            {
                *(it - 1) = 1;
            }
            else
            {
                *(it + 1) = 1;
            }
        }
    }

    int cnt = 0;
    for (int i : teams)
    {
        if (i == 0)
            cnt++;
    }

    cout << cnt;
}