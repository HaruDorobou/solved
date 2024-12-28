#include <iostream>
#include <vector>

using namespace std;

vector<long long> fibo()
{
    vector<long long> fibonacci(41);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < 41; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    
    return fibonacci;
}

int main()
{   
    int t, n; cin >> t;
    vector<long long> fibonacci = fibo();

    while(t--)
    {   
        cin >> n;
        if (n == 0) 
        {
            cout << "1 0" << '\n';
            continue;
        }
        if (n == 1) 
        {   
            cout << "0 1" << '\n';
            continue;
        }

        cout << fibonacci[n - 1] << ' ' << fibonacci[n] << '\n';
    }
}