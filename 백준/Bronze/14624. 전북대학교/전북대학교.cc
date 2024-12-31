#include <iostream>
#include <string>
using namespace std;

void printPattern(int N) {
    if (N % 2 == 0) {
        cout << "I LOVE CBNU";
        return;
    }

    int d = N / 2;

    // 첫 줄
    cout << string(N, '*') << '\n';

    // 두 번째 줄
    cout << string(d, ' ') << '*' << '\n';

    // 나머지 줄
    for (int i = 1; i <= d; i++) {
        cout << string(d-i, ' ') << '*' << string(2*i-1, ' ') << '*' << '\n';
    }
}

int main() {
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}