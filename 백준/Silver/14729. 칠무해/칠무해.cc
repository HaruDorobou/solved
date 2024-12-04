#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <memory>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    size_t n;
    cin >> n;
    auto arr = make_unique<double[]>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.get(), arr.get() + n);

    for (int i = 0; i < 7; i++)
    {
        cout << fixed << setprecision(3) << arr[i] << '\n';
    }

    return 0;
}