#include <iostream>

using namespace std;

int main()
{
    int n, task = 1;
    cin >> n;

    char prev;

    do
    {
        char waiting;
        cin >> waiting;

        if (waiting != prev)
        {
            task++;
            prev = waiting;
        }
    } while (--n);

    cout << task;
    return 0;
}