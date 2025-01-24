#include <iostream>

using namespace std;

int main()
{
    int canvas[100][100] = {0};
    int tc; cin >> tc;
    int a, b;
    while(tc--)
    {
        cin >> a >> b;
        for(int i = a; i < a + 10; i++)
        {
            for(int j = b; j < b + 10; j++)
                canvas[i][j] = 1;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(canvas[i][j]) cnt++;
        }
    }

    cout << cnt;
}