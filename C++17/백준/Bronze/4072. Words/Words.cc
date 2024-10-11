#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string input;

    while (getline(cin, input))
    {
        istringstream iss(input);

        if (input == "#")
            break;

        vector<string> v;
        string token;

        while (iss >> token)
        {
            v.emplace_back(token);
        }

        for (int i = 0; i < v.size(); i++)
        {
            string s = v[i];
            reverse(s.begin(), s.end());
            cout << s << ' ';
        }

        cout << '\n';
    }
}