#include <iostream>
using namespace std;

int main() 
{
    int cnt = 0, n; cin >> n;
    
    for(int A = 2; A <= n; A += 2)
    {
      for(int B = 1; B <= n; B++)
      {
        int C = n - A - B;
        if(C >= B + 2 && C >= 1) cnt++;
      }
    }
    cout << cnt;
}