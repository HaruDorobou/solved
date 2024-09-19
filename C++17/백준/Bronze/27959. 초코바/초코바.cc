#include <iostream>

using namespace std;

int main()
{
    int coin, price;
    cin >> coin >> price;

    cout << (coin * 100 >= price ? "Yes" : "No");
}
