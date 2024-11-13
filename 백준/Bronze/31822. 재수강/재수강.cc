#include <iostream>

using namespace std;

int main()
{
    string subject;
    int times;
    
    cin >> subject >> times;

    string code = subject.substr(0, 5);

    int cnt = 0;

    for (int i = 0; i < times; i++)
    {
        string target;
        cin >> target;

        string target_code = target.substr(0, 5);

        if(target_code == code)
            cnt++;
    }
    
    cout << cnt;
    return 0;
}