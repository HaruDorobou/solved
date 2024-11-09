#include <iostream>

using namespace std;

long long multiply(int mul)
{
    long long number = 1;
    if (mul == 0)
        return number;

    for (int i = 0; i < mul; i++)
    {
        number *= 2;
    }

    return number;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string binary;
        long long decimal = 0;
        cin >> binary;

        for (int j = 0; j < 24; j++)
        {   
            if (binary[24 - j - 1] == '1')
                decimal += multiply(j);
        }

        cout << decimal << '\n';
    }
}