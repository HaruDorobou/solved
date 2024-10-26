#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    vector<string> adjs;
    vector<string> nouns;

    for (int i = 0; i < a; i++)
    {
        string word;
        cin >> word;
        adjs.emplace_back(word);
    }

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        nouns.emplace_back(word);
    }

    string phr = "";

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
        {
            phr += adjs[i];
            phr += " as ";
            phr += nouns[j];

            cout << phr << '\n';

            phr.erase();
        }
    }

    return 0;
}