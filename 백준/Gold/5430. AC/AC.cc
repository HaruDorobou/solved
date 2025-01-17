#include <iostream>
#include <deque>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int tc; cin >> tc;

    while(tc--)
    {
        int n; string p; cin >> p >> n;
        cin.ignore();
        string line; getline(cin, line);

        deque<int> dq;
        string num = "";
        for(char c : line)
        {
            if(isdigit(c))
                num += c;
            else if(c == ',' || c == ']') 
            {
                if(!num.empty())
                {
                    dq.emplace_back(stoi(num));
                    num = "";
                }
            }
        }

        bool reverseFlag = 0;
        bool error = 0;
        for(char cmd : p)
        {
            if (cmd == 'R')
                reverseFlag = !reverseFlag;
            else
            {   
                if(dq.empty())
                {
                    error = 1;
                    break;
                }
                else if(reverseFlag)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        
        if(error) 
        {
            cout << "error" << '\n';
            continue;
        }

        cout << '[';
        if(!reverseFlag)
        {
            for(int i = 0; i < dq.size(); i++)
            {
                cout << dq[i];
                if(i < dq.size() - 1) cout << ',';
            }
        }
        else
        {
            for(int i = dq.size() - 1; i >= 0; i--)
            {
                cout << dq[i];
                if(i > 0) cout << ',';
            }
        }
        cout << "]\n";
    }
    return 0;
}