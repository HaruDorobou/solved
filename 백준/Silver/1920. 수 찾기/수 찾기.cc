#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    unordered_map<int, int> numMap;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        numMap[num]++;
    }

    cin >> m;

    for(int i = 0; i < m; i++)
    {   
        int target;
        cin >> target;
        if(numMap[target] > 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}