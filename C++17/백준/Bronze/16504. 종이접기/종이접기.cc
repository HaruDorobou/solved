#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int length;
    cin >> length;
    cin.ignore();

    vector<vector<long>> arr(length, vector<long>(length));

    // array set
    for (int i = 0; i < length; i++)
    {
        string line;
        getline(cin, line);
        istringstream iss(line);

        int num;
        for (int j = 0; j < length; j++)
        {
            iss >> num;
            arr[i][j] = num;
        }
    }

    while (length > 1)
    {
        for (int i = 0; i < length / 2; i++)
        {
            for (int j = 0; j < length / 2; j++)
            {
                arr[i][j] += arr[length - 1 - i][j] + arr[i][length - 1 - j] + arr[length - 1 - i][length - 1 - j];
            }
        }
        length /= 2;
    }

    cout << arr[0][0];
}