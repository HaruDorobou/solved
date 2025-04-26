#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> pos(m);
    
    for(int i = 0; i < m; i++)
      cin >> pos[i];
      
    int height = 0;
    
    height = max(height, pos[0]);
    
    for(int i = 1; i < m; i++)
    {
      int gap = (pos[i] - pos[i-1] + 1) / 2;
      height = max(height, gap);
    }
    
    height = max(height, n - pos[m-1]);
    cout << height;
}