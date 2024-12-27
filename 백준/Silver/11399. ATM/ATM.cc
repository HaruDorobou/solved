#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> p(n);
    vector<int> res(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int time = 0;
    
    res[0] = p[0];
    time += res[0];
    
    for(int i = 1; i < n; i++) {
        res[i] = res[i - 1] + p[i];
        time += res[i];
    }
    
    cout << time;
}