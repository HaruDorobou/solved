#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    long long total = 0;
    long long num;
    while(cin >> num)
    {
        if(cin.eof()) break;
        total += num;
    }
    cout << total;
}