#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int students;
        cin >> students;

        int score[students];
        int sum = 0;

        for (int i = 0; i < students; i++)
        {
            cin >> score[i];
            sum += score[i];
        }
        
        double mean = (double) sum / students;

        int mean_upper = 0;
        for (int i = 0; i < students; i++)
        {
            if(mean < (double) score[i]) mean_upper++;
        }

        double percentage = (double) mean_upper / students * 100.0;
        double result = round(percentage * 1000.0) / 1000.0;

        cout << result << "%" << '\n';
    }

    return 0;
}
