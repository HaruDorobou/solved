#include <iostream>

using namespace std;

int main() 
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int h,i,a,r,c;
    cin >> h >> i >> a >> r >> c;
    cout << (h*i) - (a*r*c);
}