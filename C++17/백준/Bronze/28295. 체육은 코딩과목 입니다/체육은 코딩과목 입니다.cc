#include <iostream>
using namespace std;

int main() 
{
    int i, d = 360;
    
    while(cin >> i)
    {
      if(i == 1) d += 90;
      if(i == 2) d += 180;
      if(i == 3) d -= 90;
      
      if(d > 360) d -= 360;
      else if(d < 0) d += 360;
      else if(d == 0) d += 360;
    }
    if(d == 360) cout << 'N';
    else if(d == 90) cout << 'E';
    else if(d == 180) cout << 'S';
    else if(d == 270) cout << 'W';
}