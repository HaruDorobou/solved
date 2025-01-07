#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n;
    long long t = 0;
    string pepper;
    unordered_map<string, int> m;
    m.insert({"Poblano", 1500});
    m.insert({"Mirasol", 6000});
    m.insert({"Serrano", 15500});
    m.insert({"Cayenne", 40000});
    m.insert({"Thai", 75000});
    m.insert({"Habanero", 125000});

    while(n--)
    {
        cin >> pepper;
        t += m[pepper];
    }

    cout << t;
    return 0;
}