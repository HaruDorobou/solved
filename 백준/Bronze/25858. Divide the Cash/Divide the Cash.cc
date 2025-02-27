#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tc, cash; cin >> tc >> cash;
    int problems = 0;
    vector<int> solved(tc);
    for(int i = 0; i < tc; i++)
    {
        cin >> solved[i];
        problems += solved[i];
    }
    int reward = cash / problems;

    for(int i = 0; i < tc; i++)
        cout << reward * solved[i] << '\n';
}
