#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	cin >> n;
	
	size_t nPos = n.find('7');

	if ( nPos == string::npos && stoi(n) % 7 != 0) { cout << 0; }
	if ( nPos == string::npos && stoi(n) % 7 == 0) { cout << 1; }
	if ( nPos != string::npos && stoi(n) % 7 != 0) { cout << 2; }
	if ( nPos != string::npos && stoi(n) % 7 == 0) { cout << 3; }
 }
