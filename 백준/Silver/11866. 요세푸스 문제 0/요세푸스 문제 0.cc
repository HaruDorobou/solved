#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        vec[i] = i + 1;

    cout << '<';
    size_t i = k - 1;
    do
    {   
        if ( i >= vec.size() ) i %= vec.size();
        
        if(vec.size() == 1) {
            cout << vec[i];
            break;
        }
        else cout << vec[i] << ", ";
        vec.erase(vec.begin() + i);
        i += k - 1;
    } while (1);
    cout << '>';
}