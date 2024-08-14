#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int bf(int number) {
	// brute force

	int sum = 0;
	for (int i = 0; i < to_string(number).length(); i++) {
		sum += to_string(number)[i] - '0';
	} // 자리수 분해합 계산

	return sum;
}

int main() {
	string n;
	cin >> n;

	int intN = stoi(n);
	vector<int> res;

	for (int i = 1; i < intN; i++) {
		int target = intN - i;
		if (intN == target + bf(target)) {
			res.push_back(target);
		}
	}

	if (res.empty()) { cout << 0; }
	else {
		sort(res.begin(), res.end());
		cout << res[0];
	}
}
