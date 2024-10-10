#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    vector<pair<int, int>> coordinate;

    int x, y;

    while(cin >> x >> y)
    {
        coordinate.emplace_back(x, y);
        // b, d, j;
    }

    int bessie_dist, daisy_dist;

    bessie_dist = sqrt(((coordinate[2].first - coordinate[0].first) * (coordinate[2].first - coordinate[0].first)) + ((coordinate[2].second - coordinate[0].second) * (coordinate[2].second - coordinate[0].second)));
    daisy_dist = abs(coordinate[2].first - coordinate[1].first) + abs(coordinate[2].second - coordinate[1].second);

    cout << (bessie_dist == daisy_dist ? "tie" : (bessie_dist > daisy_dist ? "daisy" : "bessie"));

    return 0;
}