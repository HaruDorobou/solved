#include <iostream>

using namespace std;

int main()
{
    string N, L;

    cin >> N >> L;

    int cnt = 0, number = 1;

    while (cnt < stoi(N))
    {
        if (to_string(number).find(L) == string::npos)
        {
            cnt++;
            number++;
        } else
            number++;
    }

    cout << number - 1;
    return 0;
}