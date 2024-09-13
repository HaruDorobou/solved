#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int row, col, ZR, ZC;
    cin >> row >> col >> ZR >> ZC;

    string line;
    vector<string> v;
    vector<string> nv;

    int row_loop = row;
    while (row_loop--)
    {
        cin >> line;
        v.emplace_back(line);
    }

    string new_line;
    string new_str;

    for (int i = 0; i < row * ZR; i++)
    {
        for (int j = 0; j < col; j++)
        {
            string temp = v[i / ZR];
            new_str.append(ZC, temp[j]);
        }

        nv.emplace_back(new_str);
        new_str.clear();
    }

    for (string s : nv)
    {
        cout << s << '\n';
    }
}
