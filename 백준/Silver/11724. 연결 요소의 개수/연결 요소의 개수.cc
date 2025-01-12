#include <iostream>
#include <vector>

using namespace std;

void dfs(const vector<vector<int>> &v, vector<bool> &visited, int x) 
{
    visited[x] = 1;

    for(int i = 0; i < v[x].size(); i++)
    {
        if(visited[v[x][i]] == 0)
            dfs(v, visited, v[x][i]);
    }
}

int main()
{
    int N, M; cin >> N >> M;
    vector<vector<int>> v(N);
    vector<bool> visited(N, 0);


    for(int i = 0; i < M; i++)
    {
        int x, y; cin >> x >> y;
        x--, y--;
        v[x].emplace_back(y);
        v[y].emplace_back(x);
    }

    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if(visited[i] == 0) 
        {
            dfs(v, visited, i);
            count++;
        }
    }
    cout << count;
    return 0;
}