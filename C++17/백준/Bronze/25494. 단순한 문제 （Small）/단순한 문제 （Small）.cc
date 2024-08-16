#include <bits/stdc++.h>

using namespace std;

int main() {
    int loop;
    cin >> loop;

    struct target {
        int a;
        int b;
        int c;
    };

    vector<target> v;

    for ( int i = 0; i < loop; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        for ( int i = 1; i <= a; i++) {
            for ( int j = 1; j <= b; j++) {
                for ( int k = 1; k <= c; k++) {
                    if ( i % j == 0 && j % k == 0 && k % i == 0) {
                        target t = {i, j, k};
                        v.push_back(t);
                    }
                }
            } 
        }

        cout << v.size() << '\n';   
        v.clear();
    }
}