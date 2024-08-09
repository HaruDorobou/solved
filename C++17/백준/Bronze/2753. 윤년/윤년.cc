#include <iostream>

using namespace std;

int main() {
    int Y;
    cin >> Y;

    short int P;

    if (Y % 4 == 0) {
        if (Y % 100 != 0 || Y % 400 == 0) {
            P = 1;
        }
    } else {
        P = 0;
    }
    cout << P;
}