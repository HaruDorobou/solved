#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 3) {
        cout << '0'; 
        return 0;
    }

    int result = n * (n-1) * (n-2) * (n-3) / 24;

    cout << result;
    return 0;
}