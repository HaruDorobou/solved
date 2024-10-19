#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input_case;
    string word;

    cin >> input_case >> word;

    int result = 0;

    for (int i = 0; i < input_case; i++)
    {
        string target_word;
        int quantity;

        cin >> target_word >> quantity;

        istringstream iss(target_word);
        string item;

        while (getline(iss, item, '_'))
        {
            if (item == word)
            {
                result += quantity;
                break;
            }
        }
    }

    cout << result;

    return 0;
}
