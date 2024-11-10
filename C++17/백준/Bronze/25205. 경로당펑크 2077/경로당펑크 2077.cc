#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    vector<char> v;

    v.emplace_back('r');
    v.emplace_back('s');
    v.emplace_back('e');
    v.emplace_back('f');
    v.emplace_back('a');
    v.emplace_back('q');
    v.emplace_back('t');
    v.emplace_back('d');
    v.emplace_back('w');
    v.emplace_back('c');
    v.emplace_back('z');
    v.emplace_back('x');
    v.emplace_back('v');
    v.emplace_back('g');

    if (find(v.begin(), v.end(), s[n - 1]) == v.end())
        cout << 0;
    else
        cout << 1;

    return 0;
}