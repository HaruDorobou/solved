#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> dir(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> dir[i];
    }

    int len = dir[0].length();

    vector<char> ans;

    for (size_t j = 0; j < len; j++)
    {
        bool check = true;

        for (size_t k = 0; k < n - 1; k++)
        {
            string s1 = dir[k];
            string s2 = dir[k + 1];

            if (s1[j] != s2[j])
            {
                check = false;
                break;
            }
        }

        if (check)
            ans.emplace_back(dir[0].at(j));
        else
            ans.emplace_back('?');
    }

    for (char c : ans)
    {
        cout << c;
    }

    return 0;
}
