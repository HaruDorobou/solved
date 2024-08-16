#include <bits/stdc++.h>

using namespace std;

int main() {
    int loop;
    long a, b, c, d;
    
    cin >> loop;

    long long e, t;

    for (int i = 0; i < loop; i++) {
        cin >> a >> b >> c >> d;

        e = a * b;
        d = c * d;

        cout << ((e == d) ? "Tie\n" : (e > d) ? "TelecomParisTech\n" : "Eurecom\n");
    }
}