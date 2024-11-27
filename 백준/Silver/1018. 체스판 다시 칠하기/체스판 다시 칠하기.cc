#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<char>> board(N, vector<char>(M));
    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++)
        {
            board[i][j] = row[j];
        }
    }

    int minCount = 64;

    for (int startRow = 0; startRow <= N - 8; startRow++)
    {
        for (int startCol = 0; startCol <= M - 8; startCol++)
        {
            int count1 = 0, count2 = 0;

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    bool shouldBeWhite = ((i + j) % 2 == 0);

                    if (shouldBeWhite)
                    {
                        if (board[startRow + i][startCol + j] != 'W')
                            count1++;
                        if (board[startRow + i][startCol + j] != 'B')
                            count2++;
                    }
                    else
                    {
                        if (board[startRow + i][startCol + j] != 'B')
                            count1++;
                        if (board[startRow + i][startCol + j] != 'W')
                            count2++;
                    }
                }
            }

            minCount = min(minCount, min(count1, count2));
        }
    }

    cout << minCount << endl;
    return 0;
}