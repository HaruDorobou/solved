#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        getline(cin, line);
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 && j == 0 && line[j] == 'F')
                cnt++;
            
            else if (i % 2 == 0) // first line
            {
                if (line[j] == 'F' && j % 2 == 0)
                    cnt++;
            }
            else
            {
                if (line[j] == 'F' && j % 2 == 1)
                    cnt++;
            }
        }
    }

    cout << cnt;
}