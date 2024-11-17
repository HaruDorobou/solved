#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> get_sub_matrix(const vector<vector<int>> &v, int start_x, int start_y, int h, int w)
{
    vector<vector<int>> sub_mat;

    for(int i = start_x; i < start_x + h; i++)
    {
        vector<int> row;
        for(int j = start_y; j < start_y + w; j++)
        {
            row.push_back(v[i][j]);
        }

        sub_mat.push_back(row);
    }

    return sub_mat;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> classroom(n, vector<int>(n, 0));

    pair<int, int> p_pos;
    pair<int, int> s_pos;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;

            if (num == 5)
                p_pos = {i, j};

            if (num == 2)
                s_pos = {i, j};

            classroom[i][j] = num;
        }
    }

    int start_x = min(p_pos.first, s_pos.first);
    int start_y = min(p_pos.second, s_pos.second);
    int h = abs(p_pos.first - s_pos.first) + 1;
    int w = abs(p_pos.second - s_pos.second) + 1;

    vector<vector<int>> sm = get_sub_matrix(classroom, start_x, start_y, h, w);
    
    int count = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(sm[i][j] == 1)
                count++;     
        }
    }

    int dist = sqrt(((p_pos.first - s_pos.first) * (p_pos.first - s_pos.first)) + ((p_pos.second - s_pos.second) * (p_pos.second - s_pos.second)));

    cout << (count >= 3 && dist >= 5  ? 1 : 0);

    return 0;
}