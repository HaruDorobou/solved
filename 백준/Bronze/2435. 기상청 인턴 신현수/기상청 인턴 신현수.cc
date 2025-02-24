#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<int> serialSum(n - k + 1);

    for(int i = 0; i < n - k + 1; i++)
    {   
        for(int j = i; j < k + i; j++)
        {  serialSum[i] += v[j]; }
    }
        
    cout << *max_element(serialSum.begin(), serialSum.end());
}