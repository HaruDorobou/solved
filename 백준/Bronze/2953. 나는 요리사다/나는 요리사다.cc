#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> score(5);

    for (int i = 0; i < 5; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        score[i] = a + b + c + d;
    }

    int max_score = *max_element(score.begin(), score.end());
    int max_index = max_element(score.begin(), score.end()) - score.begin();

    cout << max_index + 1 << ' ' << max_score;

    return 0;
}