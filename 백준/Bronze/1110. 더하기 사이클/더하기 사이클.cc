#include <iostream>
#include <string>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1;

    if (stoi(s1) < 10)
        s1 += '0';

    s2 = s1;
    s1.erase();

    int sum, cnt = 0;
    char ten_p = s2[0], one_p = s2[1];

    while (s1 != s2)
    {   
        sum = ten_p - '0' + one_p - '0';

        if (sum >= 10)
        {
            s1[0] = one_p;
            s1[1] = to_string(sum)[1];
            cnt++;
        }
        else
        {
            s1 = one_p;
            s1 += to_string(sum);
            cnt++;
        }

        ten_p = s1[0];
        one_p = s1[1];
    }

    cout << cnt;
    return 0;
}
