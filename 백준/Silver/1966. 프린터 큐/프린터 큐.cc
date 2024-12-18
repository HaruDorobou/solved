#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        int priority;
        for (int i = 0; i < N; i++)
        {
            cin >> priority;
            q.emplace(i, priority);
            pq.push(priority);
        }

        int cnt = 0;
        while(!q.empty())
        {
            int curDoc = q.front().first;
            int curPri = q.front().second;
            q.pop();

            if (curPri == pq.top())
            {
                cnt++;
                pq.pop();
                if(curDoc == M) {
                    cout << cnt << '\n';
                    break;
                }
            } else
            {
                q.emplace(curDoc, curPri);
            }
        }
    }
}