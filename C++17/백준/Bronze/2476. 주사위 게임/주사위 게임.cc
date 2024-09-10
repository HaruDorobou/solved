#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> prize;

    int d1, d2, d3;
    int total;
    
    for (int i = 0; i < N; i++)
    {
        cin >> d1 >> d2 >> d3;

        bool f1 = false, f2 = false, f3 = false;
        if (d1 == d2)
            f1 = true;
        if (d1 == d3)
            f2 = true;
        if (d2 == d3)
            f3 = true;

        if (f1 && f2 && f3)
        {
            total = 10000 + (d1 * 1000);
            prize.emplace_back(total);
            continue;
        }
        else if (f1)
        {
            total = 1000 + (d1 * 100);
            prize.emplace_back(total);
        }
        else if (f2)
        {
            total = 1000 + (d1 * 100);
            prize.emplace_back(total);

        }
        else if (f3)
        {
            total = 1000 + (d2 * 100);
            prize.emplace_back(total);
        }
        else
        {
            total = max({d1, d2, d3}) * 100;
            prize.emplace_back(total);
        }
    }

    cout << *max_element(prize.begin(), prize.end());
}