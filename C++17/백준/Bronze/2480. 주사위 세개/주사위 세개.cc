#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int prize = 0;

    int gtr;

    gtr = max({A, B, C});

    // cout << gtr << '\n';

    if ( A == B && B == C ) { // A = B = C
        prize = 10000 + (gtr * 1000); // case 1
    } else if (A == B || A == C) { // A = C , != B
        prize = 1000 + (A * 100); // case 2
    } else if ( B == C ) { // B = C, != A
        prize = 1000 + (B * 100); // case 2
    } else {
        prize = gtr * 100; // case 3
    }

    cout << prize;
}
