#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void get_string_token(vector<string> &v, const string &s)
{
    string token;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'X')
        {
            token += s[i];
        }
        else
        {
            v.emplace_back(token);
            v.emplace_back(".");
            token.clear();
        }
    }

    if (!token.empty())
        v.emplace_back(token);
}

int main()
{
    string s;
    vector<string> tv;

    getline(cin, s);

    get_string_token(tv, s);

    string ans;

    for (int i = 0; i < tv.size(); i++)
    {
        if (tv[i] == ".")
        {
            ans += '.';
            continue;
        }

        if (tv[i].length() % 2 != 0)
        {
            cout << -1;
            return 0;
        }

        int A = tv[i].length() / 4;
        int B = tv[i].length() % 4;

        while (A--)
        {
            ans += "AAAA";
        }

        while (B--)
        {
            ans += 'B';
        }

        A = B = 0;
    }

    cout << ans;

    return 0;
}