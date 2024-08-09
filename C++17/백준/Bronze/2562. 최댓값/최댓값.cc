#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int A[9];
	int B[9];

	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		A[i] = B[i] = n;
	}

	sort(A, A + 9);
	int max = A[8];

	int index = 0;

	for (int i = 0; i < 9; i++) {
		if (B[i] == max) index = i + 1;
	}

	cout << max << '\n' << index;
}