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
    return a.height > b.height;
}

bool compareId(const Tag &a, const Tag &b)
{
    return a.id < b.id;
}

int main()
{
    int n, w, h;
    cin >> n;
    vector<Tag> list;

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
    }

    sort(list.begin(), list.end(), compareId);

    for (const auto &T : list)
    {
        cout << T.rank << " ";
    }
}
