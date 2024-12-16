#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    deque<int> dq;
    while(t--)
    {
        int n; cin >> n;
        if(n == 0) { dq.pop_back(); continue; }
        
        dq.push_back(n);
    }   

    int sum = 0;
    for(int i : dq)
        sum += i;

    cout << sum;
    return 0;
}
