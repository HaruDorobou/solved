#include <iostream>
#include <string>

using namespace std;

int main()
{
    int rank;
    int number = 666;
    int cnt = 0;

    cin >> rank;

    while(1)
    {
        if (to_string(number).find("666") != string::npos)
            cnt++;

        if (rank == cnt) break;

        number++;
    }

    cout << number;
}