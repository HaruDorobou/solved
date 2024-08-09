#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;


int getNumber(char letter) { // dial information
    static const unordered_map<char, int> letterToNumber = {
        {'A', 2}, {'B', 2}, {'C', 2},
        {'D', 3}, {'E', 3}, {'F', 3},
        {'G', 4}, {'H', 4}, {'I', 4},
        {'J', 5}, {'K', 5}, {'L', 5},
        {'M', 6}, {'N', 6}, {'O', 6},
        {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7},
        {'T', 8}, {'U', 8}, {'V', 8},
        {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}
    };

    auto it = letterToNumber.find(letter);
    return (it != letterToNumber.end()) ? it->second : -1;
}

int main() {
    string S;
    // sec = dial index + 2
    int time = 0;
    cin >> S;
    for (char c : S) {
        int num;
        num = getNumber(c);
        time += num + 1;
    }

    cout << time;
}
