#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n, m; cin >> n >> m;
    map<string, int> nameToNum;
    vector<string> numToName(n+1);   
    string name;
    for(int i = 1; i <= n; i++)
    {
        cin >> name;
        nameToNum[name] = i;
        numToName[i] = name;
    }

    string target; 
    while(m--)
    {   
        cin >> target;
        if(isdigit(target[0])) // number
        {
            cout << numToName[stoi(target)] << '\n';
        } else // name
        {
            cout << nameToNum[target] << '\n';
        }
    }
    return 0;
}
