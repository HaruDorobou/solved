#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	
	int cnt = 0;

	getline(cin, S);
	
	for (int i = 1; i < S.length() + 1; i++) {
		if (isspace(S[i]) && !isspace(S[i - 1])) cnt++;

		if (i == S.length()) break;
	}

	if (isspace(S[S.length() - 1])) cout << cnt;
	else cout << cnt + 1;
	
}