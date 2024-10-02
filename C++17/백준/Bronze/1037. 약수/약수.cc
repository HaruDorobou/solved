#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int smallest = arr[0];
    int largest = arr[N - 1];
    long long A = (long long)smallest * largest;

    cout << A;

    return 0;
}
