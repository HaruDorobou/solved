#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int coffee = 0, cnt= 0, n; string s; cin >> n >> s;
    
    for(int i = 0; i < n; i++)
    {
      if(s[i] == '1') 
      {
        coffee = 2;
        cnt++;
      }
      
      if(s[i] == '0' && coffee > 0)
      {
        coffee--;
        cnt++;
      }
    }
    cout << cnt;
}