#include <iostream>

using namespace std;

int main()
{
    string num;
    while (cin >> num)
    {
        if (num == "0")
            break;

        int sum = 0;
        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] == '0')
                sum += 4;
            else if (num[i] == '1')
                sum += 2;
            else
                sum += 3;
        }
        sum += num.length() + 1;
        cout << sum << '\n';
    }
}