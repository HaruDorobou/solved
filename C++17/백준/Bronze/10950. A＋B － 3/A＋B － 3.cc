#include <iostream>

using namespace std;

int main() {
	short int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		short int A, B;
		cin >> A >> B;

		cout << A + B << '\n';
	}
}