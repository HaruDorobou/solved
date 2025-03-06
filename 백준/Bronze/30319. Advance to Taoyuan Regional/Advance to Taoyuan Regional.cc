#include <iostream>
using namespace std;

int main()
{
    string date;
    cin >> date;
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8));

    if (month < 9)
        cout << "GOOD";
    else if (month == 9 && day <= 16)
        cout << "GOOD";
    else
        cout << "TOO LATE";
}