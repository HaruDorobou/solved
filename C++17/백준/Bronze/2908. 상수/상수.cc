#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    getline(cin, S);
    istringstream iss(S);
   
    string s_num;

    vector<int> V;

    while (iss >> s_num) {
        swap(s_num[0], s_num[2]);
        int A = stoi(s_num);
        V.push_back(A);
    }

    sort(V.begin(), V.end());
    cout << V[1];
 }
