#include <iostream>
using namespace std;

int main() 
{
  long long n; cin >> n;
  
  long long c1 = n * 0.78;
  long long c2 = n - (n * 20 / 100 * 22 / 100);
  
  cout << c1 << ' ' << c2;
}