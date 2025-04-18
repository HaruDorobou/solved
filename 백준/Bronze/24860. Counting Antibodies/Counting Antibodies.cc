#include <iostream>

using namespace std;

int main() 
{   
    long long vk, jk; cin >> vk >> jk;
    long long vy, jy; cin >> vy >> jy;
    long long vh, dh, jh; cin >> vh >> dh >> jh;
    cout << (vh * dh * jh) * ((vk * jk) + (vy * jy));
}