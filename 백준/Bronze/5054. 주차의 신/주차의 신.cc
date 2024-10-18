#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n);

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            x[i] = num;
        }

        int dist = (*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end())) * 2;
        cout << dist << '\n';
    }

    return 0;
}
