#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool asc, desc;
    int number1, number2, number3;

    cout << "Gnomes:\n";

    while (n--)
    {
        asc = false;
        desc = false;

        cin >> number1 >> number2;

        if (number1 < number2)
            asc = true;
        else
            desc = true;

        cin >> number3;

        if (asc && number2 > number3) {
            cout << "Unordered\n";
            continue;
        }

        if (desc && number2 < number3)
        {
            cout << "Unordered\n";
            continue;
        }

        cout << "Ordered\n";
    }

    return 0;
}