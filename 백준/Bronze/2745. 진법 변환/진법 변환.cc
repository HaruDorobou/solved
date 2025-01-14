#include <iostream>
#include <unordered_map>

using namespace std;

long long pow(int base, int pow)
{
    long long num = 1;
    if(pow == 0) return 1;
    for(int i = 0; i < pow; i++)
        num *= (long long) base;
    
    return num;
}

int main()
{   
    unordered_map<char, int> dictionary;

    int z = 10;
    for(char c = 'A'; c <= 'Z'; c++)
    {
        dictionary.emplace(c, z);
        z++;   
    }
    
    int B; long long num = 0;
    string s; cin >> s >> B;
    int loop = s.length();

    for(int i = 0; i < loop; i++)
    {
        if(dictionary.find(s[loop - i - 1]) != dictionary.end())
            num += dictionary[s[loop - i - 1]] * pow(B, i);
        else
            num += (s[loop - i - 1] - '0') * pow(B, i);
    }

    cout << num;
    return 0;
}
