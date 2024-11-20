#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec1(n, vector<int>(m));
    vector<vector<int>> vec2(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec2[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = vec1[i][j] + vec2[i][j];
            cout << sum << ' ';
            sum = 0;
        }
        cout << '\n';
    }
    return 0;
}