#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string emoji; cin >> emoji;
    int leng = emoji.length(), col = 0, ub = 0;  
    for(char c : emoji)
    {
        if(c == ':') col++;
        if(c == '_') ub++;
    }

    cout << (leng + col) + (ub * 5);
    return 0;
}