#include <iostream>
#include <memory.h>

using namespace std;

int main()
{
    int test_case;
    while (cin >> test_case)
    {
        if (test_case == 0) return 0;
        
        int arr[50];
        memset(arr, 0, sizeof(arr));

        int lot_num;
        for (int i = 0; i < test_case; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cin >> lot_num;
                arr[lot_num] = 1;
            }
        }

        bool check = true;

        for (int i = 1; i <= 49; i++)
        {
            if (arr[i] == 0)
            {
                check = false;
                break;
            }
        }

        cout << (check ? "Yes" : "No") << '\n';
    }
}