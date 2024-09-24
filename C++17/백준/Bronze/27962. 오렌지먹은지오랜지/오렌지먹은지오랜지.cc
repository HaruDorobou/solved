#include <iostream>
#include <string>

using namespace std;

bool is_vitamine(const string &input, const int &length)
{
    for (int i = 1; i <= length; i++)
    {
        string prefix = input.substr(0, i);
        string suffix = input.substr(length - i, i);

        int diff = 0;

        for (int j = 0; j < i; j++)
        {
            if (prefix[j] != suffix[j]) diff++;
        }

        if (diff == 1)
            return true;
    }
    return false;
}

int main()
{
    string input;
    int n;
    cin >> n >> input;

    cout << (is_vitamine(input, n) ? "YES" : "NO");

    return 0;
}
