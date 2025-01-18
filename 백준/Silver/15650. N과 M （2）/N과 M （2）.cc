#include <iostream>

using namespace std;

short int n, m;
int seq[9];

void dfs(short int depth, short int start)
{
    if(depth == m)
    {
        for(int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = start; i <= n; i++)
    {
        seq[depth] = i;
        dfs(depth + 1, i + 1);
    }
}

int main()
{
    cin >> n >> m;
    dfs(0, 1);
    return 0;
}