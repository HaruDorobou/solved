#include <iostream>
using namespace std;

int main() 
{
    int a, b, cnt = 1;
    while(cin >> a >> b)
    {
      if(a == 0) return 0;
      
      if(a != b && b == 1) {cout << "Hole #" << cnt << '\n' << "Hole-in-one." << '\n' << '\n';}
      else if(a-b == 3) cout << "Hole #" << cnt << '\n' << "Double Eagle." << '\n' << '\n';
      else if(a-b == 2) cout << "Hole #" << cnt << '\n' << "Eagle." << '\n' << '\n';
      else if(a-b == 1) cout << "Hole #" << cnt << '\n' << "Birdie." << '\n' << '\n';
      else if(a-b == 0) cout << "Hole #" << cnt << '\n' << "Par." << '\n' << '\n';
      else if(a-b == -1) cout << "Hole #" << cnt << '\n' << "Bogey." << '\n' << '\n';
      else cout << "Hole #" << cnt << '\n' << "Double Bogey." << '\n' << '\n';
      
      cnt++;
    }
}