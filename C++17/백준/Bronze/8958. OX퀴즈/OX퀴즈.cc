#include <iostream>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int res = 0;
		string t_case;
		cin >> t_case;

		int point_stack = 0;

		for (int j = 0; j < t_case.length(); j++) {
			if (t_case[j] == 'O') {
				point_stack++;
				res = res + point_stack;
			}
			else {
				point_stack = 0;
			}
		}

		cout << res << '\n';
		point_stack = 0;
	}

}

