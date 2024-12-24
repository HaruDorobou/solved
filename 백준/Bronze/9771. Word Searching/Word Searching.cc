#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    string word;
    getline(cin, word);
    
    string line, test;
    int cnt = 0;
    
    getline(cin, test);
    if(test.length()) {
        for(int i = 0; i <= test.length() - word.length(); i++) {
            if(test.substr(i, word.length()) == word) 
                cnt++;
        }
    }

    while(getline(cin, line)) {
        if(line.length() < word.length()) continue;
        
        for(int i = 0; i <= line.length() - word.length(); i++) {
            if(line.substr(i, word.length()) == word) 
                cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}