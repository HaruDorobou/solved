#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> sv(5);
    int max_len = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> sv[i];
        max_len = max(max_len, (int)sv[i].length());
    }

    string s;

    for (int i = 0; i < max_len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(sv[j][i] == NULL)
                continue;
            
            s += sv[j][i];
        }
    }

    cout << s;
    return 0;
}