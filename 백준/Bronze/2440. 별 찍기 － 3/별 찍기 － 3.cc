#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            cout << '*';
        }
        cnt--;
        cout << '\n';
    }

    return 0;
}