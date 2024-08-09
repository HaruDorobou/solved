#include <iostream>
#include <sstream>

using namespace std;

int main() {

	int a;
	int ms = 1;
	ostringstream oss;
	
	for (int i = 0; i < 3; i++) {
		cin >> a;
		ms = ms * a;
	}

	oss << ms;
	string res = oss.str();

	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		
		for (int j = 0; j < res.length(); j++) {
			if (res[j] == (i + '0')) { // int to char <-> char to int i - '0'
				cnt++;
			}
		}
		
		cout << cnt << '\n';
	}
}

