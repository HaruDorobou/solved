#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int loop_count;
	cin >> loop_count;
	cin.ignore();

    vector<pair<int, string>> people;

	for (int i = 0; i < loop_count; i++) {
        string input;
		getline(cin, input);
		istringstream iss(input);

        int age;
        string name;
		iss >> age >> name;

        people.emplace_back(age, name);
    }

    stable_sort(people.begin(), people.end(), [](const auto &a, const auto &b) {
        return a.first < b.first;
    });

    for (const auto& person : people) {
        cout << person.first << " " << person.second << '\n';
    }
}