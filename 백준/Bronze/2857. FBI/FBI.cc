#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<string> v;

    int order = 1;
    bool check = false;
    bool final_check = false;
    while (cin >> s)
    {
        v.emplace_back(s);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].find("FBI") != string::npos)
        {
            check = true;
            final_check = true;
        }

        if (check) cout << i+1 << ' ';
        check = false;
    }

    if (!final_check)
        cout << "HE GOT AWAY!";

    return 0;
}
