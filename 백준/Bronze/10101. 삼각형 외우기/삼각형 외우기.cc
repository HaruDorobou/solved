#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    if(a1 == 60 && a2 == 60 && a3 == 60)
    {
        cout << "Equilateral";
        return 0;
    }

    if((a1 + a2 + a3 == 180) && (a1 == a2 || a2 == a3 || a1 == a3))
    {
        cout << "Isosceles";
        return 0;
    }

    if((a1 + a2 + a3 == 180) && (a1 != a2 && a2 != a3 && a1 != a3))
    {
        cout << "Scalene";
        return 0;
    }

    cout << "Error";

    return 0;
}