#include <iostream>

using namespace std;

int main()
{
    string n;
    int MAX_NUM = 0;
    cin >> n;

    for (int i = 1; i <= stoi(n); i++)
    {
        if(to_string(i).find_first_not_of("47") == string::npos)
            MAX_NUM = i;
    }

    cout << MAX_NUM;
}