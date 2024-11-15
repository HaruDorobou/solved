#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    string target = "";

    for (int i = 0; i < s.length(); i++)
    {
        target += '?';
    }

    if (target == s)
    {
        s.erase();
        while (n--)
        {
            s += 'a';
        }

        cout << s;
        return 0;
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] != s[s.length() - 1 - i])
            {
                if (s[i] == '?' && s[s.length() - 1 - i] != '?')
                    s[i] = s[s.length() - 1 - i];

                if (s[i] != '?' && s[s.length() - 1 - i] == '?')
                    s[s.length() - 1 - i] = s[i];
            }
            else if (s[i] == s[s.length() - 1 - i] && s[i] == '?')
            {
                s[i] = 'a';
                s[s.length() - 1 - i] = 'a';
            }
        }

        cout << s;
    }
    else
    {
        if (s[n / 2] == '?')
            s[n / 2] = 'a';

        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] != s[s.length() - 1 - i])
            {
                if (s[i] == '?' && s[s.length() - 1 - i] != '?')
                    s[i] = s[s.length() - 1 - i];

                if (s[i] != '?' && s[s.length() - 1 - i] == '?')
                    s[s.length() - 1 - i] = s[i];
            }
            else if (s[i] == s[s.length() - 1 - i] && s[i] == '?')
            {
                s[i] = 'a';
                s[s.length() - 1 - i] = 'a';
            }
        }
        cout << s;
    }

    return 0;
}
