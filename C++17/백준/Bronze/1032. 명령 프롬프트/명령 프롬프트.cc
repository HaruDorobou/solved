#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> dir(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> dir[i];
    }

    int len = dir[0].length();

    string ans;

    for (size_t j = 0; j < len; j++)
    {
        bool check = true;

        for (size_t k = 0; k < n - 1; k++)
        {
            if (dir[k][j] != dir[k + 1][j])
            {
                check = false;
                break;
            }
        }

        ans += (check ? dir[0][j] : '?');
    }

    cout << ans;

    return 0;
}
