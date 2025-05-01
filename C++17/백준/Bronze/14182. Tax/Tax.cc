#include <iostream>
using namespace std;

int main() 
{
    int income;
    while(cin >> income)
    { 
      if(income == 0) return 0;
      
      if(income < 1000000)
        cout << income << '\n';
      else if(income < 5000000)
        cout << int(income - (income * 0.1)) << '\n';    
      else
        cout << int(income - (income * 0.2)) << '\n';     
    }
}