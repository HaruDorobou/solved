#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << '\n';

    ostringstream oss;

    oss << a << b;

    string res = oss.str();

    cout << stoi(res) - c;
}