#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    if (n == 0) { cout << 0; return 0; }
    vector<int> vec(n);

    int exclude = (int)round(n * 0.15);

    for (int i = 0; i < n; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());

    double sum = 0; int cnt = 0;
    for (int i = exclude; i < n - exclude; i++)
    { 
        sum += vec[i];
        cnt++;
    }

    cout << (int)round(sum / cnt);
}
