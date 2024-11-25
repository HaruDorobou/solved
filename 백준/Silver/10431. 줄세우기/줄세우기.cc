#include <iostream>
#include <memory.h>

using namespace std;

int main()
{
    int n, tn, step = 0;
    int arr[20];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tn;
        for (int j = 0; j < 20; j++) cin >> arr[j];
        for (int j = 0; j < 20; j++)
            for (int k = j; k < 20; k++) if (arr[j] > arr[k]) step += 1;

        cout << tn << ' ' << step << '\n';
        memset(arr, 0, sizeof(arr));
        step = 0;
    }
    return 0;
}