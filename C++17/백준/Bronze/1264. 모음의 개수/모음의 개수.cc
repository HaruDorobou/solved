#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string line;

    while (getline(cin, line))
    {   
        int ans = 0;
        if (line[0] == '#')
            break;

        for (int i = 0; i < line.length(); i++)
        {   
            line[i] = tolower(line[i]);

            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
            {
                ans += 1;
            }
        }

        line.clear();

        cout << ans << '\n';
    }

    return 0;
}