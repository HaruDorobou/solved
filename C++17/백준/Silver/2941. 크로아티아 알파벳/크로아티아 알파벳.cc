#include <iostream>
#include <vector>
#include <string>

using namespace std;

string splitToken(string input, vector<string> targetWords)
{
    for (const auto &word : targetWords)
    {
        size_t pos = input.find(word);
        while (pos != string::npos)
        {
            input.replace(pos, word.length(), "#");
            pos = input.find(word);
        }
    }

    return input;
}

int main()
{
    string stringInput;

    cin >> stringInput;

    vector<string> croatia = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    string tokenCnt = splitToken(stringInput, croatia);

    cout << tokenCnt.length();
}