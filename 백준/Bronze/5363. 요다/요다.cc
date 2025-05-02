#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n; cin >> n;
    cin.ignore();
    while(n--)
    {
        string line, word; 
        getline(cin, line);

        vector<string> v;
        istringstream iss(line);

        while(iss >> word)
            v.emplace_back(word);
        
        v.emplace_back(v[0]);
        v.emplace_back(v[1]);
        v.erase(v.begin());
        v.erase(v.begin());
        
        for(int i = 0; i < v.size(); i++)
        {
            if(i < v.size() - 1)
                cout << v[i] << ' ';
            else
                cout << v[i] << '\n'; 
        }
    }
}