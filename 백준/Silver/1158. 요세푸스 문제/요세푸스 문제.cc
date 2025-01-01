#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, cnt = 1; cin >> n >> k;
    vector<int> list;
    queue<int> que;
    for(int i = 1; i <= n; i++)
        que.push(i);

    while(!(que.empty()))
    {
        if(cnt == k)
        {   
            list.emplace_back(que.front());
            que.pop();
            cnt = 1;
        } else 
        {
            int swap = que.front();
            que.pop();
            que.push(swap);
            cnt++;
        }
    }
    
    cout << '<';
    for(int i = 0; i < n - 1; i++) 
    {
        cout << list[i] << ", ";
    }
    cout << list[n - 1] << '>';
}