#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &vec, int n, int m)
{
    if(n < 0 || n >= vec.size() || m < 0 || m >= vec[0].size() || vec[n][m] != 1)
        return;

    vec[n][m] = 0;

    dfs(vec, n+1, m);
    dfs(vec, n-1, m);
    dfs(vec, n, m+1);
    dfs(vec, n, m-1);
}

int main()
{      
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int tc; cin >> tc;
    
    while(tc--)
    {
        int m, n, k; cin >> m >> n >> k;
        vector<vector<int>> field(n, vector<int>(m, 0));

        for(int i = 0; i < k; i++)
        {   
            int x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(field[i][j] == 1) 
                {
                    dfs(field, i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
