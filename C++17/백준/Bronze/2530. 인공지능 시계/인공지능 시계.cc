#include <bits/stdc++.h>

using namespace std;

int main() {
    int H, M, S;
    cin >> H >> M >> S;

    int target;

    cin >> target;

    S += target;

    while ( S > 59 ) {
        S -= 60;
        M++;
        if ( M > 59 ) {
            M -= 60;
            H++;
            if ( H > 23 ) {
               H = 0; 
            }
        }
    }

     cout << H << " " << M << " " << S;
}