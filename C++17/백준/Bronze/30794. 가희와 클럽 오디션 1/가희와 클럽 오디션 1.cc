#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string judge;

    cin >> n >> judge;

    if (judge == "miss") cout << 0;
    if (judge == "bad") cout << n * 200;
    if (judge == "cool") cout << n * 400;
    if (judge == "great") cout << n * 600;
    if (judge == "perfect") cout << n * 1000;
}
