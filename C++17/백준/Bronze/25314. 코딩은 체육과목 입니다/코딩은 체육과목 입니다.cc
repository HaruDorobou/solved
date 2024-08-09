#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int div = 0;

	div = N / 4;

	if (N == 4) {
		cout << "long int";
	}
	else {
		for (int i = 0; i < div-1; i++) {
			cout << "long ";
		}
		cout << "long int";
	}
}