#include <iostream>

using namespace std;

int main() {
    int A = 0;
    int B = 0;

    bool is_tie = false;
    
    for ( int i = 3; i >= 1; i-- ) {
        int n;
        cin >> n;
        A += n * i;
    }

    for ( int i = 3; i >= 1; i-- ) {
        int n;
        cin >> n;
        B += n * i ;
    }

    if ( A == B ) { is_tie = true; }
    
    cout << ( A == B ? "T" : (A > B ? "A" : "B"));
}