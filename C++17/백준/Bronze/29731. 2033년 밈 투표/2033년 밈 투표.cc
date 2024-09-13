#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1 = "Never gonna give you up";
    string s2 = "Never gonna let you down";
    string s3 = "Never gonna run around and desert you";
    string s4 = "Never gonna make you cry";
    string s5 = "Never gonna say goodbye";
    string s6 = "Never gonna tell a lie and hurt you";
    string s7 = "Never gonna stop";

    vector<string> codex;
    codex.emplace_back(s1);
    codex.emplace_back(s2);
    codex.emplace_back(s3);
    codex.emplace_back(s4);
    codex.emplace_back(s5);
    codex.emplace_back(s6);
    codex.emplace_back(s7);

    int loop;
    cin >> loop;
    cin.ignore();

    string target;
    size_t index;

    bool found = false;

    while (loop--)
    {
        getline(cin, target);

        found = false;
        
        for (const auto &s : codex)
        {
            if (s.find(target) != string::npos)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            break;
        }
    }

    cout << (found == true ? "No" : "Yes");
}
