#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    
    int daily_climb = a - b;
    int total_climb = v - a;

    int d = (total_climb + daily_climb - 1) / daily_climb + 1;

    cout << d;
}