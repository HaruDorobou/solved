#include <iostream>
#include <sstream>
#include <queue>

using namespace std;

queue<int> que;

void command(string s)
{
    if(s == "pop")
    {
        if(!(que.empty()))
        {
            cout << que.front() << '\n';
            que.pop();
        } else
            cout << -1 << '\n';
    } 
    else if (s == "size")
        cout << que.size() << '\n';
    else if (s == "empty")
    {
        if(que.empty())
            cout << '1' << '\n';
        else 
            cout << '0' << '\n';
    }
    else if (s == "front")
    {
        if(!(que.empty()))
            cout << que.front() << '\n';
        else
            cout << -1 << '\n';
    } else
    {
        if(!(que.empty()))
            cout << que.back() << '\n';
        else
            cout << -1 << '\n';
    }
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();
    while(n--)
    {
        
        string commLine;
        getline(cin, commLine);
        if(commLine == "empty" || commLine == "pop" || commLine == "size" || commLine == "front" || commLine == "back")
            command(commLine);
        else
        {
            istringstream iss(commLine); string s; int i;
            iss >> s >> i;
            que.push(i);
        }
            
    }
    return 0;
}