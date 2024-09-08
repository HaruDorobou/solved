#include <iostream>

using namespace std;

int main()
{

    int match, width, height, match_length;
    cin >> match >> width >> height;

    bool check_flag;

    for (int i = 0; i < match; i++)
    {   
        check_flag = false;
        cin >> match_length;
        
        if (match_length <= width || match_length <= height) 
        {
            check_flag = true;
        }

        if ( match_length * match_length <= width * width + height * height ) {
            check_flag = true;
        }

        cout << (check_flag ? "DA" : "NE") << '\n';
    }

}
