#include <iostream>

using namespace std;

int num_count[10001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int loop;
	cin >> loop;

	for (int i = 0; i < loop; i++) {
		int n;
		cin >> n;
		num_count[n]++;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < num_count[i]; j++) {
			cout << i << '\n';
		}
	}
}
