#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> output;

    while (1) {
        string s;
        getline(cin, s);
        if (cin.eof()) break;
        
        output.push_back(s);
    }

    for (int i = 0; i < output.size(); i++) { cout << output[i] << '\n'; }
}