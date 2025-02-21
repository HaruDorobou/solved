#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(n)); 

    for(int i = 0; i < n; i++)
    {   
        for(int j = 0; j < n; j++)
        {   cin >> mat[i][j];   }
    }

    vector<vector<int>> psum(n + 1, vector<int>(n + 1));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        { psum[i][j] = mat[i-1][j-1] + psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1]; }
    }

    while(m--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << psum[x2][y2] - psum[x1-1][y2] - psum[x2][y1-1] + psum[x1-1][y1-1] << '\n'; 
    }
}   