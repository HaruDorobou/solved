#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unordered_map<int, string> dictionary;
    dictionary.emplace(0, "zero");
    dictionary.emplace(1, "one");
    dictionary.emplace(2, "two");    
    dictionary.emplace(3, "three");
    dictionary.emplace(4, "four");
    dictionary.emplace(5, "five");
    dictionary.emplace(6, "six");
    dictionary.emplace(7, "seven");
    dictionary.emplace(8, "eight");
    dictionary.emplace(9, "nine");

    int N, M; cin >> N >> M;
    vector<int> v;
    for(int i = N; i <= M; i++)
        v.emplace_back(i);

    map<string, int> m;
    for(int i = 0; i < v.size(); i++)
    {   
        string num = to_string(v[i]);
        string sNum = "";
        if(to_string(v[i]).size() == 1)
        {
            m.emplace(dictionary[v[i]], v[i]);
            continue;
        }
        else
        {   
            sNum.append(dictionary[num[0] - '0']);
            sNum += ' ';
            sNum.append(dictionary[num[1] - '0']);
        }

        m.emplace(sNum, v[i]);
    }

    int cnt = 1;
    for(const auto [x, y] : m)
    {
        if(cnt % 10 == 0) cout << y << ' ' << '\n';
        else cout << y << ' ';
        cnt++;
    }
    return 0;
}
