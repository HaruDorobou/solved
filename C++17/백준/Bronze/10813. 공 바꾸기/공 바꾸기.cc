#include <iostream>
#include <vector>

using namespace std;

int main() {
	short int N, M;

	cin >> N >> M;

	vector<int> A(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		A[i] = i;
	}

	while (true) {
		short int a, b;		
		cin >> a >> b;
		if (cin.eof()) break;

		short int temp = 0;

		temp = A[a];
		A[a] = A[b];
		A[b] = temp;
	}
	
	for (int i = 1; i <= N; i++) {
		cout << A[i] << ' ';
	}
}
