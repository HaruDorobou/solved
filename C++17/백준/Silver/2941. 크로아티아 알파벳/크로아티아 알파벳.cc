#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> splitToken(string input, vector<string> resultVector, vector<string> targetWords)
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

    for (char c : input)
    {
        if (c == '#')
        {
            resultVector.push_back("#");
        }
        else
        {
            if (!resultVector.empty() && resultVector.back() != "#")
            {
                resultVector.back() += c;
            }
            else
            {
                resultVector.push_back(string(1, c));
            }
        }
    }

    return resultVector;
}

int main()
{
    string stringInput;
    cin >> stringInput;
    vector<string> tokenList;
    vector<string> croatia = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    tokenList = splitToken(stringInput, tokenList, croatia);

    int tokenCnt = 0;

    for(string token : tokenList) {
        tokenCnt += token.length();
    }

    cout << tokenCnt;
}
