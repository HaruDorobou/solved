#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> v(10000001, pair<int, int>(0, 0));
    v[1] = {1, 1};
    v[2] = {1, 2};
    v[3] = {2, 1};

    bool flag = 0;
    bool wasOne = 1;
    for(int i = 4; i <= 10000001; i++)
    {   
        if(v[i-1].first == 1 && wasOne)  
        {
            v[i].first = 1;
            v[i].second = v[i-1].second + 1;
            flag = 0; wasOne = 0;
            continue;
        } else if (v[i-1].second == 1 && wasOne)
        {   
            v[i].first = v[i-1].first + 1;
            v[i].second = 1;
            flag = 1; wasOne = 0;
            continue;
        } 

        if(flag)
        {
            v[i].first = v[i-1].first - 1;
            v[i].second = v[i-1].second + 1;
            if(v[i].first) wasOne = 1;
        } else
        {
            v[i].first = v[i-1].first + 1;
            v[i].second = v[i-1].second - 1;
            if(v[i].second) wasOne = 1;
        }
    }

    int number; cin >> number;
    cout << v[number].first << '/' << v[number].second;

    return 0;
}