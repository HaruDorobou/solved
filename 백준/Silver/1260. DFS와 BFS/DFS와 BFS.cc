#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(const vector<vector<int>> &g, vector<bool> &visited, int start)
{
    visited[start] = 1;    
    cout << start + 1 << ' ';
    for(int i = 0; i < g[start].size(); i++)
    {
        int vertex = g[start][i];
        if(!visited[vertex]) 
            dfs(g, visited, vertex);
    }
}

void bfs(const vector<vector<int>> &g, int vertex, queue<int> &q, int start)
{
    vector<bool> visited(vertex + 1, 0);
    q.push(start);
    visited[start] = 1;
    cout << start + 1 << ' ';
    
    while(!(q.empty()))
    {   
        int current = q.front();
        q.pop();

        for(int next : g[current])
        {
            if(visited[next] != 1)
            {
                q.push(next);
                visited[next] = 1;
                cout << next + 1 << ' ';
            }
        }
    }
}

int main() 
{   
    int vertex, edge, start;
    cin >> vertex >> edge >> start;
    vertex--; start--;

    vector<vector<int>> graph(vertex + 1);

    vector<bool> visitedList(vertex + 1, 0);
    queue<int> visitedQue;

    for(int i = 0; i < edge; i++)
    {   
        int v1, v2; cin >> v1 >> v2;
        v1--; v2--;
        graph[v1].emplace_back(v2);
        graph[v2].emplace_back(v1);
    }

    for(int i = 0; i < graph.size(); i++)
        sort(graph[i].begin(), graph[i].end());

    dfs(graph, visitedList, start); cout << '\n';
    bfs(graph, vertex, visitedQue, start);
    return 0;
}