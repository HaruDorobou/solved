#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s; // #<string>
    cin >> s;

    string r = s;
    reverse(s.begin(), s.end()); // #<algorithm>

    if (s == r) { cout << 1; }
    else { cout << 0; }
 }