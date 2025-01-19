#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{ 
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  vector<int> v;
  
  string s; cin >> s;
  for(char c : s)
    v.emplace_back(c -'0');
  
  sort(v.rbegin(), v.rend());
  
  for(int i : v)
    cout << i;
    
  return 0;
}