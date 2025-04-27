#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 8; i++)
    {
        int b; cin >> b;
        if(b != 0 && b != 1)
        {
            cout << 'F';
            return 0;
        }
    }
    
    cout << 'S';
}