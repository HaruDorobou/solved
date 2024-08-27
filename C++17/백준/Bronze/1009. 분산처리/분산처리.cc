#include <iostream>
#include <vector>

using namespace std;
// 문제 똑바로 읽을 것

int main()
{
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
            if (result == 0) result = 10;
        } 

        cout << result << '\n';
    }
    return 0;
}
