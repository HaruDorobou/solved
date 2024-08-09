#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> cmap;

    for (char c : s) {
        c = toupper(c);
        cmap[c]++;
    }

    int max_freq = 0;
    char max_char = '?';

    for (auto pair : cmap) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
            max_char = pair.first;
        }
        else if (pair.second == max_freq) {
            max_char = '?';
        }
    }

    cout << max_char;
 }