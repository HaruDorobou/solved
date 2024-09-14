#include <iostream>

using namespace std;

int main()
{
    string name;
    int age, weight;

    while(1) 
    {
        cin >> name >> age >> weight;
        if ( name == "#") 
        {
            break;
        }

        cout << ((age <= 17 && weight < 80) ? name.append(" Junior\n") : name.append(" Senior\n"));  
    }
}
