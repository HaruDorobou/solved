#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Tag
{
    int id;
    int weight;
    int height;
    int rank;

    Tag(int i, int w, int h) : id(i), weight(w), height(h), rank(0) {}
};

bool compareTag(const Tag &a, const Tag &b)
{
    if (a.weight != b.weight)
        return a.weight > b.weight;
    return a.height > b.height;}

int main()
{
    int n, w, h;
    cin >> n;
    vector<Tag> list;
    vector<int> result(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        list.emplace_back(i, w, h);
    }

    sort(list.begin(), list.end(), compareTag);

    for (int i = 0; i < n; i++)
    {
        list[i].rank = 1;

        for (int j = 0; j < i; j++)
        {
            if (list[j].weight > list[i].weight && list[j].height > list[i].height)
            {
                list[i].rank++;
            }
        }

        result[list[i].id] = list[i].rank;
    }

    for (const int &r : result)
    {
        cout << r << " ";
    }
}
