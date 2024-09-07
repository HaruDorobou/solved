#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int perfect_study_day = 0;

    int plan[N];
    int actual_study[N];

    for (int i = 0; i < N; i++)
    {
        int page;
        cin >> page; 
        plan[i] = page;
    }

    for (int i = 0; i < N; i++)
    {
        int page;
        cin >> page; 
        actual_study[i] = page;
    }

    for ( int i = 0 ; i < N; i++) 
    {
        perfect_study_day += (plan[i] <= actual_study[i]);
    }

    cout << perfect_study_day;
}
