#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMeetingRound(int n, int jimin, int hansu)
{
    vector<int> players;
    for (int i = 1; i <= n; i++)
        players.push_back(i);
    

    int round = 1;
    while (players.size() > 1)
    {
        vector<int> next_round;

        for (int i = 0; i < players.size(); i += 2)
        {
            if (i + 1 >= players.size())
            {
                next_round.push_back(players[i]);
                continue;
            }

            int p1 = players[i];
            int p2 = players[i + 1];

            if ((p1 == jimin && p2 == hansu) || (p1 == hansu && p2 == jimin))
                return round;
            

            // 지민이나 한수가 있는 쪽이 승리
            if (p1 == jimin || p1 == hansu)
            {
                next_round.push_back(p1);
            }
            else if (p2 == jimin || p2 == hansu)
            {
                next_round.push_back(p2);
            }
            else
            {
                next_round.push_back(p1);
            }
        }

        players = next_round;
        round++;
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int total, kim, im;
    cin >> total >> kim >> im;

    cout << findMeetingRound(total, kim, im);
}