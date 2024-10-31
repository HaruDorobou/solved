#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int battle;
    cin >> battle;

    vector<int> good_point(6);
    vector<int> evil_point(7);

    good_point[0] = 1;
    good_point[1] = 2;
    good_point[2] = 3;
    good_point[3] = 3;
    good_point[4] = 4;
    good_point[5] = 10;

    evil_point[0] = 1;
    evil_point[1] = 2;
    evil_point[2] = 2;
    evil_point[3] = 2;
    evil_point[4] = 3;
    evil_point[5] = 5;
    evil_point[6] = 10;

    for (int i = 0; i < battle; i++)
    {
        int sum_good = 0;
        int sum_evil = 0;

        for (int j = 0; j < 6; j++)
        {
            int army_number;
            cin >> army_number;

            sum_good += good_point[j] * army_number;
        }

        for (int j = 0; j < 7; j++)
        {
            int army_number;
            cin >> army_number;

            sum_evil += evil_point[j] * army_number;
        }

        cout << "Battle " << i + 1 << ": "; 
        cout << (sum_good == sum_evil ? "No victor on this battle field\n" : (sum_good > sum_evil ? "Good triumphs over Evil\n" : "Evil eradicates all trace of Good\n" ));
    }

    return 0;
}
