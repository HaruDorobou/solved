#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A, B;

    cin >> N >> A >> B;

    cout << (A == B ? "Anything" : ((A > B) ? "Subway" : "Bus"));


    return 0;
}
