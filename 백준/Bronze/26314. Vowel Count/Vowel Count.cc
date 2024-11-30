#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<char> vset;
    vset.insert('a');
    vset.insert('e');
    vset.insert('i');
    vset.insert('o');
    vset.insert('u');

    while(n--)
    {
        string s;
        cin >> s;

        int vowels = 0, consonants = 0;

        for(int i = 0; i < s.length(); i++)
        {   
            if(vset.find(s[i]) != vset.end()) vowels++;
            else consonants++;
        }
        cout << s << '\n';
        cout << (vowels > consonants ? 1 : 0) << '\n'; 
    }
}