#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, m, j; cin >> n >> m;
    for(int i = 0; i < 5; i++)
    {   
        cin >> j;
        cout << j - (n * m) << ' ';
    }
}