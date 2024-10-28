#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string store = "";

    int result = 0;

    while (n--)
    {
        string s;
        cin >> s;

        bool check = true;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (store.find(s[i + 1]) != string::npos)
            {
                check = false;
                break;
            }
            if (s[i] != s[i + 1])
                store += s[i];
        }

        if (check)
            result++;
        
        store.erase();
    }

    cout << result;
    return 0;
}
