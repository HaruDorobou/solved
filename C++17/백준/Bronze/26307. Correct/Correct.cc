#include <iostream>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	int hour = H - 9;
	cout << hour * 60 + M;
}
