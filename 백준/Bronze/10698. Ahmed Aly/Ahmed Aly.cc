#include <iostream>
#include <sstream>

using namespace std;

int main() 
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++)
    {
        string line; getline(cin, line); 
        istringstream iss(line); 
        
        int a, b, c;
        char sign1, sign2;

        iss >> a >> sign1 >> b >> sign2 >> c;
        
        if(sign1 == '+')
        {
            if(a + b != c)
                cout << "Case " << i << ": " << "NO" << '\n';
            else
                cout << "Case " << i << ": " << "YES" << '\n';
        } else
        {
            if(a - b != c)
                cout << "Case " << i << ": " << "NO" << '\n';
            else
                cout << "Case " << i << ": " << "YES" << '\n';            
        }
    }
}