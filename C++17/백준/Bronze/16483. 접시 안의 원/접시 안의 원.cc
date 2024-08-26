#include <iostream>
#include <cmath>

using namespace std;
// 문제 똑바로 읽을 것
int main() {
    double C;
    cin >> C;
    
    int res = round(pow(C / 2, 2) * 10) / 10;
    cout << res;
}