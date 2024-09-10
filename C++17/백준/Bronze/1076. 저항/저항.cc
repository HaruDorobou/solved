#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, pair<int, long long>> colorMap = {
        {"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}},
        {"orange", {3, 1000}}, {"yellow", {4, 10000}}, {"green", {5, 100000}},
        {"blue", {6, 1000000}}, {"violet", {7, 10000000}}, 
        {"grey", {8, 100000000}}, {"white", {9, 1000000000}}
    };
    
    string col1, col2, col3;
    cin >> col1 >> col2 >> col3;

    long long result = (colorMap[col1].first * 10LL + colorMap[col2].first) * colorMap[col3].second;
    cout << result;
}