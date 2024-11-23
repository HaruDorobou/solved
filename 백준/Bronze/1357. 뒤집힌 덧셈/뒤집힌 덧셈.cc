#include <iostream>

using namespace std;

int Rev(string s)
{    
    for(int i = 0; i < s.length() / 2; i++)
    {
        char temp;
        temp = s[s.length() - 1 - i];
        s[s.length() - 1 - i] = s[i];
        s[i] = temp;
    }

    return stoi(s);
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << Rev(to_string((Rev(a) + Rev(b))));
    
    return 0;
}