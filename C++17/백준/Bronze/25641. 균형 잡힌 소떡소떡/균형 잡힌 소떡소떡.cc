#include <iostream>
#include <string>

using namespace std;

int main() {
    int leng;
    string st;
    
    cin >> leng >> st;
    int loop = leng;

    int pos = 0;

    int s = 0, t = 0;
    while ( loop-- )
    {   
        string sub = st.substr(pos, leng);
        for ( char c : sub)
        {
            c == 's' ? s++ : t++;
        }

        if(s == t)
        {
            st = sub;
            break;
        }
        
        s = t = 0;
        pos++;
    }

    cout << st;
}   