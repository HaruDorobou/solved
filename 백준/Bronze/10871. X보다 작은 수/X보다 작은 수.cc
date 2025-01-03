#include <iostream>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;

	int S[10000];

	for (int i = 0; i < N; i++) {
		int s;
		cin >> s;
		S[i] = s;
	}

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] < X) {
			cout << S[i] << " ";
		}
	}
}