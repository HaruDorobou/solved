#include <iostream>

using namespace std;

int main()
{
    int amp, watt, volt;

    cin >> amp >> watt >> volt;

    
    cout << (amp <= watt / volt ? 1 : 0);
}