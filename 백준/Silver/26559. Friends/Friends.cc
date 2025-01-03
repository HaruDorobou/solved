#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    int tc; cin >> tc;

    while(tc--)
    {   
        int c; cin >> c;
        vector<pair<int, string>> list(c);

        string name; int score;
        for(int i = 0; i < c; i++)
        {
            cin >> name >> score;
            list[i] = {score, name};
        }

        sort(list.rbegin(), list.rend());

        for(int i = 0; i < c - 1; i++)
            cout << list[i].second << ", ";
        cout << list[c - 1].second << '\n';
    }
}
