#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B; // input cur time A(h) B(m)
    cin >> C; // spent time for cooking(m <= 1000)
    
    int S = B + C;
    
    int plus_hour = S / 60;
    int rest_min = S % 60;
    int final_hour = A + plus_hour;
    
    if (final_hour >= 24) { final_hour = final_hour - 24;}

    cout << final_hour << " " << rest_min;
}