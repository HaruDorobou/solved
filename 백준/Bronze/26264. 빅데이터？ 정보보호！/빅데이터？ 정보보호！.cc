#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;

    cin.ignore();

    string line;
    getline(cin, line);

    int s_cnt = 0, b_cnt = 0;

    for (int i = 0; i < line.length(); i++)
    {
        if(line[i] == 's') s_cnt++;
        if(line[i] == 'b') b_cnt++;
    }

    cout << (s_cnt == b_cnt  ? "bigdata? security!" : (s_cnt > b_cnt ? "security!" : "bigdata?"));

    return 0;
}