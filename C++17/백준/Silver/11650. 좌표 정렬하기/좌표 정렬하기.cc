#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    int caseNumber;
    cin >> caseNumber;

    vector<pair<int,int>> coordinateVector;
    
    while (caseNumber--) {
        int x, y;
        cin >> x >> y;

        coordinateVector.push_back(make_pair(x, y));
    }

    sort(coordinateVector.begin(), coordinateVector.end());

    // for ( auto p : coordinateVector) {
    //     cout << "x : " << p.first << " y : " << p.second << '\n'; 
    // }

    for ( auto p : coordinateVector) {
        cout << p.first << " " << p.second << '\n';
    }
}