#include <iostream>

using namespace std;

int main() {
	long long X;
	int N;

	cin >> X;
	cin >> N;

    long long R = 0;

	for (int i = 0; i < N; i++) {
		int a, b;

		cin >> a >> b;

		R += (long long)a* b;
	}

	if (R == X) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}