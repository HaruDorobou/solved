#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int difficulty, n;
    string name;

    vector<pair<int, string>> v; 

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> difficulty;

        v.emplace_back(difficulty, name);
    }
    
    sort(v.begin(), v.end());

    cout << v[0].second;

    return 0;
}
