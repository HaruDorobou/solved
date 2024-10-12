#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, num;
    int max_count = 0;
    vector<int> count(100001, 0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        count[num]++;
        max_count = max(max_count, count[num]);
    }

    cout << (max_count <= (n + 1) / 2 ? "YES" : "NO");

    return 0;
}