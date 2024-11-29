#include <iostream>

using namespace std;

int main()
{
    string num;
    while (cin >> num)
    {
        if (num == "0")
            return 0;

        long long res = 0, sum;
        for (int i = 0; i < num.length(); i++)
        {
            res += num[i] - '0';
        }

        do
        {
            sum = 0;
            for (int i = 0; i < to_string(res).length(); i++)
            {
                sum += (long long)to_string(res)[i] - '0';
            }

            res = sum;
        } while (to_string(res).length() >= 2);

        cout << res << '\n';
    }
}