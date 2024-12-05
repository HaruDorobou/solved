#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string sNum;
    cin >> sNum;
    
    long long llNum = stoll(sNum);
    int iNum = 0;

    for (char c : sNum)
        iNum += c - '0';

    while (1) {
        if(llNum % iNum == 0) break;
        
        llNum++;
        iNum = 0;
        for(char c : to_string(llNum))
            iNum += c - '0';
    }

    cout << llNum;
    return 0;
}