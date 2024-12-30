#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void dfs(const vector<vector<int>> &graph, vector<bool> &visited, int target)
{
    visited[target] = 1;

    for(int i = 0; i < graph[target].size(); i++)
    {
        int node = graph[target][i];
        if(!visited[node]) dfs(graph, visited, node);
    }
}

int main()
{
    ios_base::sync_with_stdio(1);
    cin.tie(nullptr);
    
    int n, m, cnt = 0; cin >> n >> m;
    vector<vector<int>> graph(n);
    vector<bool> visited(n);

    for(int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        graph[a - 1].emplace_back(b - 1);
        graph[b - 1].emplace_back(a - 1);
    }

    dfs(graph, visited, 0);
    for(bool t : visited)
    { if(t) cnt++; }

    cout << cnt - 1;
}