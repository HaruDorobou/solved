#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n;
    int f;
    cin >> n;
    cin >> f;

    for (int i = 0; i <= 99; i++)
    {
        long long new_n = (n / 100) * 100 + i;
        
        if (new_n % f == 0) {
            cout << setw(2) << setfill('0') << i;
            return 0;
        }
    }

    return 0;
}