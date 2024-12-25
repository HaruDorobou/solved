#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Information 
{   
    string name;
    short int day;
    short int month;
    short int year;
    Information(string n, short int d, short int m, short int y)
        :name(n), day(d), month(m), year(y) {};
};


bool comparator(const Information &a, const Information &b)
{
    if(a.year != b.year)
        return a.year < b.year;
    if(a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n; cin >> n;
    cin.ignore();
    vector<Information> peoples;

    string line;

    while(n--)
    {
        getline(cin, line);
        istringstream iss(line);
        
        string name; short int d, m, y;
        iss >> name >> d >> m >> y;

        peoples.emplace_back(Information(name, d, m ,y));
    }

    sort(peoples.begin(), peoples.end(), comparator);
    cout << peoples[peoples.size() - 1].name << '\n' << peoples[0].name;
    return 0;
}