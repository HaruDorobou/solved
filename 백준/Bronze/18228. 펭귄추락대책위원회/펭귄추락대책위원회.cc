#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int k, pp; cin >> k;
    vector<int> v(k); 
    
    for(int i = 0; i < k; i++) 
    {
        cin >> v[i];
        if(v[i] == -1) pp = i;
    }

    int left_min = *min_element(v.begin(), v.begin() + pp);
    int right_min = *min_element(v.begin() + pp + 1, v.end());

    cout << left_min + right_min;
}