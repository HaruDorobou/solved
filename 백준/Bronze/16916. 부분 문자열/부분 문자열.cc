#include <iostream>
#include <vector>

using namespace std;

vector<int> getPi(string s)
{
    int j = 0;
    vector<int> pi(s.length(), 0);

    for(int i = 1; i < s.length(); i++)
    {
        while(j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if(s[i] == s[j])
        {
            pi[i] = ++j;
        }
    }

    return pi;
}

bool kmp(vector<int> pi, string word, string pattern)
{
    int j = 0;
    for (int i = 0; i < word.length(); i++)
    {
        while (j > 0 && word[i] != pattern[j])
        {
            j = pi[j - 1];
        }
        if (word[i] == pattern[j])
        {
            j++;
            if (j == pattern.length())
                return true;
        }
    }

    return false;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> pi = getPi(s2);

    cout << kmp(pi, s1, s2) ? 1 : 0;

    return 0;
}