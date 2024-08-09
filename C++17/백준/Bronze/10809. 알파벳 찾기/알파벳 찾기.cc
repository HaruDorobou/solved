#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main() {
	string alpha = "abcdefghijklmnopqrstuvwxyz";

	vector<int> res(26, -1);

	string S;

	cin >> S;

	for (short int i = 0; i < S.length(); i++) {
		for (short int j = 0; j < 26; j++) {
			if (S[i] == alpha[j] && res[j] == -1) {
				res[j] = i;
				break;
			}
		}
	}

	for (short int i = 0; i < 26; i++) {
		cout << res[i] << ' ';
	}
}