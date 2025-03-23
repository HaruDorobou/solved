#include <iostream>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int round; cin >> round;
    int min_problems = 2 * (round + 1);
    int max_problems = 3 * (round + 1);  

    cout << min_problems << ' ' << max_problems;
}
