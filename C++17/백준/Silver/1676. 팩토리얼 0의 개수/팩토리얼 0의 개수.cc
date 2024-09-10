#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int two = 0, five = 0;

    for (int i = 2; i <= n; i++)
    {
        int num = i;
        while (num % 2 == 0)
        {
            two++;
            num /= 2;
        }

        while (num % 5 == 0)
        {
            five++;
            num /= 5;
        }
    }

    cout << min(two, five);
}