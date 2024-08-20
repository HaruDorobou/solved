#include <iostream>
#include <cmath>

using namespace std;

int cal(int loop) {
    int result;
    // (2^n + 1) ^ 2
    result = pow((pow(2, loop) + 1), 2);
    return result;
}

int main() {
    int loop = 0;
    cin >> loop;

    cout << cal(loop); 
}
