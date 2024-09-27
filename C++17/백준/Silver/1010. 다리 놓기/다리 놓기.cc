#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> pascal(int n)
{
    vector<vector<long long>> triangle(n + 1, vector<long long>(n + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}


int main()
{
    int n;
    cin >> n;

    vector<vector<long long>> triangle = pascal(30);

    while (n--)
    {
        int west, east;
        cin >> west >> east;
        cout << triangle[east][west] << '\n';
    }
}