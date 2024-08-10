#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBigNumbers(string num1, string num2) {
    if (num1.length() > num2.length())
        swap(num1, num2);
    
    string result = "";
    int carry = 0;
    int diff = num2.length() - num1.length();
    
    for (int i = num1.length() - 1; i >= 0; i--) {
        int sum = ((num1[i] - '0') + (num2[i + diff] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    
    for (int i = diff - 1; i >= 0; i--) {
        int sum = ((num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    
    if (carry)
        result.push_back(carry + '0');
    
    reverse(result.begin(), result.end());
    return result;
}

string subtractBigNumbers(string num1, string num2) {
    string result = "";
    int borrow = 0;
    
    while (num1.length() < num2.length()) num1 = "0" + num1;
    while (num2.length() < num1.length()) num2 = "0" + num2;
    
    for (int i = num1.length() - 1; i >= 0; i--) {
        int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.push_back(diff + '0');
    }
    
    reverse(result.begin(), result.end());
    result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
    
    return result.empty() ? "0" : result;
}

string compareBigNumbers(string num1, string num2) {
    if (num1.length() != num2.length()) 
        return (num1.length() > num2.length()) ? "greater" : "less";
    return (num1 > num2) ? "greater" : (num1 < num2) ? "less" : "equal";
}

int main() {
    string a, b;
    cin >> a >> b;
    
    bool isNegativeA = (a[0] == '-');
    bool isNegativeB = (b[0] == '-');
    
    if (isNegativeA) a = a.substr(1);
    if (isNegativeB) b = b.substr(1);
    
    string result;
    if (isNegativeA == isNegativeB) {
        if (isNegativeA) {
            result = addBigNumbers(a, b);
            result = "-" + result;
        } else {
            result = addBigNumbers(a, b);
        }
    } else {
        string compResult = compareBigNumbers(a, b);
        if (compResult == "equal") {
            result = "0";
        } else if (compResult == "greater") {
            result = subtractBigNumbers(a, b);
            if (isNegativeA) result = "-" + result;
        } else {
            result = subtractBigNumbers(b, a);
            if (isNegativeB) result = "-" + result;
        }
    }
    
    cout << result << endl;
    return 0;
}