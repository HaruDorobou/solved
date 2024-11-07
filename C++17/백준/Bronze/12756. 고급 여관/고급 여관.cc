#include <iostream>

using namespace std;

int main()
{
    int a_atk, a_hp, b_atk, b_hp;
    cin >> a_atk >> a_hp >> b_atk >> b_hp;

    while (!(a_hp <= 0 || b_hp <= 0))
    {
        a_hp -= b_atk;
        b_hp -= a_atk;
    }

    if (a_hp > b_hp && a_hp > 0) {
        cout << "PLAYER A";
        return 0;
    }

    if (b_hp > a_hp && b_hp > 0) {
        cout << "PLAYER B";
        return 0;
    }

    if (a_hp <= 0 && b_hp <= 0) {
        cout << "DRAW";
        return 0;
    }
}