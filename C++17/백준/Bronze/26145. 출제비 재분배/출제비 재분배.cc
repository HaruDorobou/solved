#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int n, m, total;

    cin >> n >> m;
    cin.ignore();

    total = n + m;
    vector<int> money(total);

    string line;

    getline(cin, line);

    istringstream iss(line);

    int distribution, n_index = 0;
    while (iss >> distribution)
    {
        money[n_index] += distribution;
        n_index++;
    }

    int loop = n;
    int money_index;
    n_index = 0;

    while (loop--)
    {
        money_index = 0;
        distribution = 0;

        getline(cin, line);
        iss.clear();
        iss.str(line);

        while (iss >> distribution)
        {
            money[money_index] += distribution;
            money[n_index] -= distribution;
            money_index++; 
        }
        
        n_index++;
    }

    for (int i : money)
    {
        cout << i << " ";
    }
}
