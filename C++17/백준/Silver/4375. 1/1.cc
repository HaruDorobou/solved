#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if( n == 1 ) {
            cout << "1\n"; 
            continue;
        }

        long long r = 1, k = 1;

        while (r != 0)
        {   
            r = (r * 10 + 1) % n;
            k++;
        }
        
        cout << k << '\n';
    }
}