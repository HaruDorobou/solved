#include <iostream>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int max_cows = (w / l) * (h / l);

    cout << min(n, max_cows);
}