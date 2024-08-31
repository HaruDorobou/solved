#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int dot_cnt = 0;

    // tile set = (i, j), i+j = dot count
    // 00 10 11 20 21 22
    // 00 01 02 10 11 12 20 21 22
    // 00       10 11    20 21 22
    for ( int i = 0; i <= N; i++) {
        for ( int j = 0; j <= N; j++) {
            if ( j > i ) continue;
            else dot_cnt += i+j;
        }
    }
    
    cout << dot_cnt;
}
