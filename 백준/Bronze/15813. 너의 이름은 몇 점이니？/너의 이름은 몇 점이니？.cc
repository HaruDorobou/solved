#include <iostream>
using namespace std;
int main() {
    int leng, sum = 0; string name; cin >> leng >> name; for(char c : name) sum += (c - 'A' + 1); cout << sum; return 0;
}
