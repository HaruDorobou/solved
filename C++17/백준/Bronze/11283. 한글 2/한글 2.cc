#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int order;
	cin >> s;

	int cho = ((s[0] & 255) - 234) * 4096;
	int jung = ((s[1] & 255) - 176) * 64;
	int jong = ((s[2] & 255) - 127);

	order = cho + jung + jong;
	cout << order;
}