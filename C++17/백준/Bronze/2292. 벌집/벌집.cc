#include <iostream>

using namespace std;
 
int main() {
    int N;
    cin >> N;

    int shell_cnt = 1;
    int shell_max = 1;

    while ( N > shell_max ) {
        shell_max += 6 * shell_cnt;
        shell_cnt++;
    }

    cout << shell_cnt;
}

