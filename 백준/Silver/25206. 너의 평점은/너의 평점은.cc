#include <iostream>
#include <unordered_map>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    unordered_map<string, double> reputation_map{
        {"A+", 4.5},
        {"A0", 4.0},
        {"B+", 3.5},
        {"B0", 3.0},
        {"C+", 2.5},
        {"C0", 2.0},
        {"D+", 1.5},
        {"D0", 1.0},
        {"F", 0}};

    string line;
    double sum = 0;
    double score_sum = 0;

    for (int i = 0; i < 20; i++)
    {
        getline(cin, line);
        istringstream iss(line);
        string title, score, reputation;

        iss >> title >> score >> reputation;

        if (reputation == "P")
            continue;

        sum += (stod(score) * reputation_map[reputation]);
        score_sum += stod(score);
    }

    cout << fixed << setprecision(6) << (sum == 0 ? 0 : (sum / score_sum)) << '\n';

    return 0;
}