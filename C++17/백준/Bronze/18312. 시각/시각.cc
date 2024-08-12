#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {

	int N;
	string K;

	cin >> N >> K;

	int cnt = 0;

	// N = hour(24)
	// K = target, 0 <= K <= 9

	for (int h = 0; h <= N; h++) {
		for (int m = 0; m < 60; m++) { // min
			for (int s = 0; s < 60; s++) { // sec
				stringstream ss;
				ss << setfill('0') << setw(2) << h << " "
					<< setfill('0') << setw(2) << m << " "
					<< setfill('0') << setw(2) << s;

				string time_str = ss.str();
				if (time_str.find(K) != string::npos) {
					cnt++;
				}
			} 
		}
	}

	cout << cnt;
}