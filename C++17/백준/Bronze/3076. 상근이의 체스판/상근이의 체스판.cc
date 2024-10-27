#include <iostream>

using namespace std;

int main()
{
    int r, c, a, b;
    cin >> r >> c >> a >> b;

    for (int i = 0; i < r; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < a; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    if (k % 2 == 0)
                    {
                        for (int m = 0; m < b; m++)
                        {
                            cout << 'X';
                        }
                    }
                    else
                    {
                        for (int m = 0; m < b; m++)
                        {
                            cout << '.';
                        }
                    }
                }

                cout << '\n';
            }
        }

        else
        {
            for (int j = 0; j < a; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    if (k % 2 == 0)
                    {
                        for (int m = 0; m < b; m++)
                        {
                            cout << '.';
                        }
                    }
                    else
                    {
                        for (int m = 0; m < b; m++)
                        {
                            cout << 'X';
                        }
                    }
                }

                cout << '\n';
            }
        }
    }

    return 0;
}