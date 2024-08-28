#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    int result = 0;
    for (char digit : N) {
        result = (result * 10 + (digit - '0')) % 20000303;
    }
    
    cout << result << endl;
    
    return 0;
}