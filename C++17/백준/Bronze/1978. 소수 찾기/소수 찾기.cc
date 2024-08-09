#include <iostream>
#include <cmath>

using namespace std;

bool ip(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int N; // limit 100 times 
    cin >> N;
    
    int cnt = 0;
    for ( int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (ip(num)) {
            // true
            cnt++;
        }
    }

    cout << cnt;
}