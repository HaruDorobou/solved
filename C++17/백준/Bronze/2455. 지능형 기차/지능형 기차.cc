#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;

    int a, b;

    int passenger = 0;

    while (cin >> a >> b)
    {
        passenger -= a;
        passenger += b;

        v.emplace_back(passenger);
    }

    cout << *max_element(v.begin(), v.end());
}