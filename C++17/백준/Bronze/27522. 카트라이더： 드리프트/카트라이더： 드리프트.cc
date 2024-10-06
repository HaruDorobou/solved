#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Record
{
    int M;
    int SS;
    int sss;
    int rank;
    string team;

    Record(int M, int SS, int sss, int rank, string team) : M(M), SS(SS), sss(sss), rank(rank), team(team) {}
};

bool compare_records(const Record &a, const Record &b)
{
    if (a.M != b.M)
    {
        return a.M < b.M;
    }
    else if (a.SS != b.SS)
    {
        return a.SS < b.SS;
    }

    return a.sss < b.sss;
}

int main()
{
    string race_record, team;
    int M, SS, sss;

    vector<Record> records;

    for(int i = 0; i < 8; i++)
    {
        cin >> race_record >> team;

        M = stoi(race_record.substr(0));
        SS = stoi(race_record.substr(2, 3));
        sss = stoi(race_record.substr(5, 7));

        records.emplace_back(Record(M, SS, sss, 0, team));
    }

    sort(records.begin(), records.end(), compare_records);

    int red_score = 0, blue_score = 0;

    for (int i = 0; i < 8; i++)
    {
        records[i].rank = i;
    }

    for (const auto &rec : records)
    {
        if (rec.rank == 0)
        {
            if (rec.team == "R")
                red_score += 10;
            else
                blue_score += 10;
        }

        if (rec.rank == 1)
        {
            if (rec.team == "R")
                red_score += 8;
            else
                blue_score += 8;
        }

        if (rec.rank == 2)
        {
            if (rec.team == "R")
                red_score += 6;
            else
                blue_score += 6;
        }

        if (rec.rank == 3)
        {
            if (rec.team == "R")
                red_score += 5;
            else
                blue_score += 5;
        }

        if (rec.rank == 4)
        {
            if (rec.team == "R")
                red_score += 4;
            else
                blue_score += 4;
        }

        if (rec.rank == 5)
        {
            if (rec.team == "R")
                red_score += 3;
            else
                blue_score += 3;
        }

        if (rec.rank == 6)
        {
            if (rec.team == "R")
                red_score += 2;
            else
                blue_score += 2;
        }
        if (rec.rank == 7)
        {
            if (rec.team == "R")
                red_score += 1;
            else
                blue_score += 1;
        }
    }

    cout << (red_score < blue_score ? "Blue" : "Red");

    return 0;
}