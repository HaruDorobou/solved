#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {   
            cin >> arr[i][j];
        }
    }
    int tc; cin >> tc;

    
    while(tc--)
    {
        int sum = 0, i, j, x, y; cin >> i >> j >> x >> y;
        i--; j--; x--; y--;

        for(int a = i; a <= x; a++)
        {
            for(int b = j; b <= y; b++)
            {
                sum += arr[a][b];
            }
        }

        cout << sum << '\n';
    }
}