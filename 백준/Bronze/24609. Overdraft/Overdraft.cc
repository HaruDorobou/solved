#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tran; cin >> tran;
    int deposit = 0;
    int balance_set = 0;
    int min_balance_set = 0;
    while(tran--)
    {
        int m; cin >> m;
        deposit += m;

        if(deposit <= 0)
        {   
            balance_set = abs(deposit);
            if(min_balance_set < balance_set)
                min_balance_set = abs(deposit);
        }
    }
    cout << min_balance_set;
}