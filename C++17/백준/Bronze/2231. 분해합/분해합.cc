#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int cal_digit_sum(int number) {
	// brute force

	int sum = 0;
	for (int i = 0; i < to_string(number).length(); i++) {
		sum += to_string(number)[i] - '0';
	} // 자리수 분해합 계산

	return sum;
}

int main() {
	string input_string;
	cin >> input_string;

	int int_number = stoi(input_string);
	vector<int> ans_vector;

	for (int i = 1; i < int_number; i++) {
		int target = int_number - i;
		if (int_number == target + cal_digit_sum(target)) {
			ans_vector.push_back(target);
		}
	}

	cout << (ans_vector.empty() ? 0 : *min_element(ans_vector.begin(), ans_vector.end()));
}
