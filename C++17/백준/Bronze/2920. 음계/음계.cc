#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {
	vector<int> V;

	string line;
	getline(cin, line);

	istringstream iss(line);

	for (char c : line) {
		if (isspace(c)) continue;
		int target = c - '0'; // char to int

		V.push_back(target);
	}

	vector<int> V1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> V2 = { 8, 7, 6, 5, 4, 3, 2, 1 };

	if (V == V1) { cout << "ascending\n"; }
	else if (V == V2) { cout << "descending\n"; }
	else { cout << "mixed\n"; }
}

