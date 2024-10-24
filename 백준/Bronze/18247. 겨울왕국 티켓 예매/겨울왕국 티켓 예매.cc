#include <iostream>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, m;
        cin >> n >> m;

        if (n < 12 || m < 4) {
            cout << -1 << '\n';
        } else
        {    
            int target = 4 + (11 * m); 
            cout << target << '\n';
        }
    }
}
