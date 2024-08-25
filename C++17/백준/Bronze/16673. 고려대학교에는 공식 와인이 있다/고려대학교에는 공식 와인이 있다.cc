#include <iostream>
#include <cmath>

using namespace std;

int formula(int year, int K, int P) {
    // kn + pn^2
    int res = 0;
    res = K * year + pow(year, 2) * P;

    return res;
}

int main() {
    double K, P;
    int C;
    int ans = 0;

    cin >> C >> K >> P;

    for ( int i = 1; i <= C; i++) {
        ans += formula(i, K, P);
    }

    cout << ans;
}