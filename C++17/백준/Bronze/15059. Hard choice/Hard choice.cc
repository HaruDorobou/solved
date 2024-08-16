#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, b, p, cd, bd, pd;
    

    cin >> c >> b >> p;
    cin >> cd >> bd >> pd;

    int sum = 0;

    if ( cd - c > 0 ) { sum += cd - c; }
    if ( bd - b > 0 ) { sum += bd - b; }
    if ( pd - p > 0 ) { sum += pd - p; }

    cout << sum; 

}