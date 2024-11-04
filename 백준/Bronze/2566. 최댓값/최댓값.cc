#include <iostream>

using namespace std;

int main()
{
    int max_val = 0;
    int max_x = 0, max_y = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            int num;
            cin >> num;

            if (num > max_val)
            {
                max_val = num;
                max_x = i;
                max_y = j;
            }
        }
    }

    cout << max_val << '\n' << max_x + 1 << ' ' << max_y + 1;
}