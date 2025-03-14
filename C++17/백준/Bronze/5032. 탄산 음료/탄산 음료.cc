#include <iostream>
using namespace std;

int main() 
{
    int empty_bottles, cnt = 0;
    
    int e, f, c; cin >> e >> f >> c;
    empty_bottles = e + f;

    while(empty_bottles >= c)
    { 
      int new_bottles = empty_bottles / c;
      cnt += new_bottles;
      empty_bottles = empty_bottles % c + new_bottles;
    }
    cout << cnt;
}