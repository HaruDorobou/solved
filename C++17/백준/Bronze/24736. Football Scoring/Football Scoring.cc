#include <iostream>

using namespace std;

int main()
{
    int touchdown, field, safety, point_after, tp_conversion, total_visit, total_home;

    cin >> touchdown >> field >> safety >> point_after >> tp_conversion;
    total_visit = touchdown * 6 + field * 3 + safety * 2 + point_after * 1 + tp_conversion * 2;

    cin >> touchdown >> field >> safety >> point_after >> tp_conversion;
    total_home = touchdown * 6 + field * 3 + safety * 2 + point_after * 1 + tp_conversion * 2;

    cout << total_visit << " " << total_home;
}