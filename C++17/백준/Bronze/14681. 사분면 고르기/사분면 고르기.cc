#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X;
    cin >> Y;
    
    short int R;
    // 1Q X > 0, Y > 0 
    if (X > 0 && Y > 0) {
        R = 1;
    }

    // 2Q X < 0, Y > 0
    if (X < 0 && Y > 0) {
        R = 2;
    }

    // 3Q X < 0, Y < 0
    if (X < 0 && Y < 0) {
        R = 3;
    }

    // 4Q X > 0, Y < 0
    if (X > 0 && Y < 0) {
        R = 4;
    }
    
    cout << R;
}