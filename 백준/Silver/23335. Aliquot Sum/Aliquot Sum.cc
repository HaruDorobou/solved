#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> li(t);

    for (int i = 0; i < t; i++)
        cin >> li[i];

    for (int i = 0; i < t; i++)
    {
        int target = li[i];
        int sum = 0;
        for (int j = 1; j * j <= target; j++)
        {
            if (target % j == 0)
            {
                sum += j;
                if (j * j != target) sum += (target / j);
            }
        }

        if((sum - target) > target) cout << "abundant" << '\n';
        else if ((sum - target) < target) cout << "deficient" << '\n';
        else cout << "perfect" << '\n';
    }

    return 0;
}