#include <iostream>
using namespace std;

int main() 
{
  int t;
  while(cin >> t)
  {
    if(!t) return 0;
    
    for(int i = 1; i <= t; i++)
    {
      for(int j = 1; j <= i; j++) cout << '*';
      cout << '\n';
    }
  }
}