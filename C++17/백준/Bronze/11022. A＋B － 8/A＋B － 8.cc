#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int a, b;
		cin >> a >> b;

		int sum = a + b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << sum << " " << '\n';
	}
}