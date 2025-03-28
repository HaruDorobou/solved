#include <iostream>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n1, n2, n12; cin >> n1 >> n2 >> n12;
    cout << ((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
}