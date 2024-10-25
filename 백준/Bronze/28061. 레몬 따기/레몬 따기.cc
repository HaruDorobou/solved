#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x;
    cin >> x;

    vector<int> result(x);

    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        result[i] = a - (x - i);
    }

    int max_apple = *max_element(result.begin(), result.end());

    cout << max_apple;

    return 0;
}
