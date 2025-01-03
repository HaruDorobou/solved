#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k >> n;

    vector<long long> arr(k);

    long long max_len = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        max_len = max(max_len, arr[i]);
    }

    long long left = 1, right = max_len, ans = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long cable_count = 0;

        for (int i = 0; i < k; i++)
        {
            cable_count += arr[i] / mid;
        }

        if (cable_count >= n)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans;

    return 0;
}
