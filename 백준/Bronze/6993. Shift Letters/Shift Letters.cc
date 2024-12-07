#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string s1, s2;
        int n;
        cin >> s1 >> n;

        s2 = s1;
        rotate(s2.begin(), s2.begin() + s2.length() - n, s2.end());

        cout << "Shifting " << s1 << " by " << n << " positions gives us: " << s2 << '\n'; 
    }

    return 0;
}
