#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int cal_distance(int f, int d, int dest_d) 
{
    int dist = 0;
    dist = (f - 1)+ (dest_d - d);

    return dist;
}

int main()
{
    int floor, classroom, team, f, d;
    cin >> floor >> classroom >> team;

    int length = classroom + 2;
    int dist;

    vector<int> distance;
    
    for ( int i = 0; i < team; i++)
    {
        cin >> f >> d;
        dist = cal_distance(f, d, length - 1);
        distance.push_back(dist);
    }

    int min_index = min_element(distance.begin(), distance.end()) - distance.begin();

    cout << min_index + 1;
}