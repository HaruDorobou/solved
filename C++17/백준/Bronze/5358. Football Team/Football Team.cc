#include <iostream>
#include <string>

using namespace std;

int main() {

    while(1) {
        string s;

        getline(cin, s);

        if (cin.eof()) { break;}

        for ( int i = 0; i < s.length(); i++) {
            if ( s[i] == 'i') { s[i] = 'e'; continue; }
            if ( s[i] == 'e') { s[i] = 'i'; continue; }
            if ( s[i] == 'I') { s[i] = 'E'; continue; }
            if ( s[i] == 'E') { s[i] = 'I'; continue; }
        }

        cout << s << '\n';
    }

    return 0;
}