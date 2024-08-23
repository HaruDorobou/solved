#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> target;

    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        target.push_back(number);    
    }

    target.erase(unique(target.begin(), target.end()), target.end());

    sort(target.begin(), target.end());

    for ( int i : target) {
        cout << i << '\n';
    }
}
