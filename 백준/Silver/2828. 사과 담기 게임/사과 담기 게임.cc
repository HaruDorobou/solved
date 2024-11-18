#include <iostream>

using namespace std;

int main()
{   
    int n, m, k;
    cin >> n >> m >> k;
    
    int p_pos = 1, a_pos, dist = 0;
    
    while (k--)
    {   
        cin >> a_pos;
        
        if(p_pos > a_pos) {
            dist += p_pos - a_pos;
            p_pos = a_pos;
        }
        else if(p_pos + m - 1 < a_pos)
        {
            dist += a_pos - (p_pos + m - 1);
            p_pos = a_pos - m + 1;
        }
    }

    cout << dist;

    return 0;
}