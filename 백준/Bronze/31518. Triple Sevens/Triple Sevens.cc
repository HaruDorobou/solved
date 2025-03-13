#include <iostream>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n; char slot;
    string res = {};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> slot;
            if(slot == '7') res += slot;
        }
    }    
    cout << (res == "777" ? "777" : "0");
}