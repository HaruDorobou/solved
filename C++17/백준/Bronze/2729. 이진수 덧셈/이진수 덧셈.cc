#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int tc; cin >> tc;
    string sNum0, sNum1;
    while(tc--)
    {
      cin >> sNum0 >> sNum1;
      string result;
      
      int carry = 0;
      int i = sNum0.length() - 1;
      int j = sNum1.length() - 1;
      
      while(i >= 0 || j >= 0 || carry)
      {
        int sum = carry;
        if(i >= 0) sum += sNum0[i--] - '0';
        if(j >= 0) sum += sNum1[j--] - '0';
        
        result = char(sum % 2 + '0') + result;
        carry = sum / 2;
      }
      while(result.length() > 1 && result[0] == '0')
        result = result.substr(1);
      
      cout << result << '\n';
    }
}