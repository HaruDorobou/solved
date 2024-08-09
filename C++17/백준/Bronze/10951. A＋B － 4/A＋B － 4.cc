#include <iostream>

using namespace std;

int main() {
	short int a, b;
	

	while(true) {
		cin >> a >> b;
		
		if (cin.eof()) break;

		int sum = a + b;
		cout << sum << '\n';
	}

	return 0;
}