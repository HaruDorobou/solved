#include <iostream>
#include <vector>

using namespace std;

int apart(int floor, int room)
{
    vector<vector<int>> apt(floor + 1, vector<int>(room + 1, 0));

    for (int j = 1; j <= room; j++)
    {
        apt[0][j] = j;
    }

    for (int i = 1; i <= floor; i++)
    {
        for (int j = 1; j <= room; j++)
        {
            apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
        }
    }

    return apt[floor][room];
}

int main()
{
    int testCase;
    cin >> testCase;

    // k floor
    // n room

    while (testCase--)
    {   
        int k, n;
        cin >> k;
        cin >> n;
        cout << apart(k, n) << '\n';
    }
}