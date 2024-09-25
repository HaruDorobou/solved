#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;

    while (n--)
    {   
        cin >> s;
        cout << ((s.length() >= 6 && s.length() <= 9) ? "yes\n" : "no\n");
    }
}
