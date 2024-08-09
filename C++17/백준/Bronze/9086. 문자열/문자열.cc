#include <iostream>
#include <string>

using namespace std; 

int main() {
	short int T;

	cin >> T;

	for (short int i = 0; i < T; i++) {
		string W;

		cin >> W;
		
		cout << W[0] << W[W.size() - 1] << '\n';
	}
}