#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 10000;
vector<int> kaprekar(MAX, 0);

int cal(int n)
{
    if (kaprekar[n] != 0)
        return kaprekar[n];

    string s = to_string(n);
    s = string(4 - s.length(), '0') + s;
    
    sort(s.begin(), s.end());
    int smallest = stoi(s);

    sort(s.rbegin(), s.rend());
    int greater = stoi(s);

    int next = greater - smallest;
    
    return kaprekar[n] = (next == n ? 0 : 1 + cal(next));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < MAX; i++)
    {
        if(kaprekar[i] == 0) cal(i);
    }

    int t;
    cin >> t;

    
    while (t--)
    {
        int n;
        cin >> n;
        cout << kaprekar[n] << '\n';
    }

    return 0;
}