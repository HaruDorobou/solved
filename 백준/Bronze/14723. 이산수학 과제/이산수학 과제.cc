#include <iostream>

using namespace std;

int main()
{
    int n, demo, nume;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << ' ' << 1;
        return 0;
    }

    int cnt = 2;
    int starting_number = 2;
    while (1)
    {
        for (int i = 0; i < cnt; i++)
        {
            if (starting_number + i == n)
            {
                demo = 1 + i;
                nume = cnt - i;
                cout << nume << ' ' << demo;
                return 0;
            }
        }

        starting_number += cnt;
        cnt++;
    }
}