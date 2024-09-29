#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int Y_total = 0, M_total = 0;

    for (size_t i = 0; i < N; i++)
    {
        int t;
        cin >> t;

        Y_total = (t / 30 == 0 ? Y_total += 10 : Y_total += (t / 30) * 10 + 10);
        M_total = (t / 60 == 0 ? M_total += 15 : M_total += (t / 60) * 15 + 15);
    }

    if (Y_total > M_total)
    {
        cout << 'M' << ' ' << M_total;
    }
    else if (Y_total == M_total)
    {
        cout << 'Y' << " M " << Y_total;
    }
    else
    {
        cout << 'Y' << ' ' << Y_total;
    }

    return 0;
}
