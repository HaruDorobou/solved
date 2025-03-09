#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  vector<char> v(3);
  for(int i = 0; i < 3; i++)
    cin >> v[3 - i - 1];
  for(char c : v) cout << c;
}