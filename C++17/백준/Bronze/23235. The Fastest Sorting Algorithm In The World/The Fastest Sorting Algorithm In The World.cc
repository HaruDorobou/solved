#include <iostream>

int main()
{   
    short n, cnt=1;
    while(std::cin >> n)
    {
        if(n==0) return 0;
        int dummy;
        for(;n!=0;n--) std::cin >> dummy;
        std::cout << "Case " << cnt << ": Sorting... done!" << '\n'; cnt++;
    }
}