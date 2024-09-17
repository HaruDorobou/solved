#include <iostream>
#include <string>

using namespace std;

int main()
{
    int leng;
    string st;

    cin >> leng >> st;
    int pos = 0, s = 0, t = 0;

    for (char c : st)
    {
        c == 's' ? s++ : t++;
    }

    while (s != t && pos < leng)
    {
        st[pos]  == 's' ? s-- : t--;
        pos++;
    }

    cout << st.substr(pos);
}