#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int mean(const vector<int> &v)
{
    double sum = 0.0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    return round(sum / (double)v.size());
}

int median(const vector<int> &v)
{
    vector<int> vec = v;
    sort(vec.begin(), vec.end());
    return vec[vec.size() / 2];
}

int max_freq(const vector<int> &v)
{
    int max_freq = 0;
    unordered_map<int, int> map;

    for (int num : v)
    {
        max_freq = max(max_freq, ++map[num]);
    }

    vector<int> median_candidates;

    for (const auto &[key, value] : map)
    {
        if (value == max_freq)
        {
            median_candidates.emplace_back(key);
        }
    }

    sort(median_candidates.begin(), median_candidates.end());
    return median_candidates.size() > 1 ? median_candidates[1] : median_candidates[0];
}

int min_max_subs(const vector<int> &v)
{
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());

    return max - min;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << mean(v) << '\n'
         << median(v) << '\n'
         << max_freq(v) << '\n'
         << min_max_subs(v) << '\n';

    return 0;
}