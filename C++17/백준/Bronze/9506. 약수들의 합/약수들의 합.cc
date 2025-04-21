#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    while(cin >> t)
    {
      if(t < 0) return 0;
      vector<int> v;

      int total = 1; v.emplace_back(1);
      for(int i = 2; i <= t/2; i++) {if(t % i == 0) {v.emplace_back(i); total += i;}}
      
      if(t==total) 
      {
        cout << t << " = ";
        for(int i = 0; i < v.size() - 1; i++) {cout << v[i] << " + ";}
        cout << v[v.size() - 1] << '\n'; 
      } else {cout << t << " is NOT perfect." << '\n';}
    }
}