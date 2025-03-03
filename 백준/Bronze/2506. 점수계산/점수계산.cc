#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int combo = 0, score = 0;
    auto it = v.begin();
    while(it < v.end())
    {
        if(*it)
        {
            score += *it + combo;
            if(*(it+1)) combo++;
            else combo = 0;
        }
        it++;
    }
    cout << score;
}