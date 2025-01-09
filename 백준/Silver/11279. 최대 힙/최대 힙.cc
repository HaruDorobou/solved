#include <iostream>
#include <queue>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    priority_queue<long long> pq;

    int n; cin >> n;

    long long input;
    while(n--)
    {
        cin >> input;
        if(!input) 
        {   
            if(pq.empty())
            {
                cout << 0 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
        } else pq.push(input);
    }    
    return 0;
}