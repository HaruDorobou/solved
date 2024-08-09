#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	string S;

	while (1) {
		cin >> S;
		if (S[0] == '0') {
			break;
		}
		string rav = S;
		reverse(rav.begin(), rav.end());

		if (S == rav) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
}
