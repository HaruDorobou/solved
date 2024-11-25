#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, tn, step = 0;
    vector<int> v(20);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tn;
        for (int j = 0; j < 20; j++) cin >> v[j];
        
        for (int j = 0; j < 20; j++)
        {
            for(int k = j; k < 20; k++)
            {
                if (v[j] > v[k]) step += 1;
            }
        }

        cout << tn << ' ' << step << '\n';
        v.assign(v.size(), 0);
        step = 0;
    }
    return 0;
}