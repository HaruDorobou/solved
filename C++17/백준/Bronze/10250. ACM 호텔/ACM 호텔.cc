#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int H, W, N;
		cin >> H >> W >> N;

		int D = (N - 1) / H + 1; 
		int F = N % H;

		if (F == 0) { F = H; }
	
		cout << (F * 100) + D << '\n';
	}
}