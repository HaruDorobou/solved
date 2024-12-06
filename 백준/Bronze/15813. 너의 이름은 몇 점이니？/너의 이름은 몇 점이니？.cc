#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> score;
    for (int i = 0; i < 26; i++) score.emplace('A' + i, i + 1);
    
    int leng, sum = 0;
    string name;
    cin >> leng >> name;

    for(char c : name)  sum += score[c];
    cout << sum;
    return 0;
}