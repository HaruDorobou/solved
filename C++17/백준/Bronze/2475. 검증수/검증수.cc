#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	string S;
	
	getline(cin, S);

	istringstream ss(S);

	vector<int> A;

	int n;

	while (ss >> n) {
		A.push_back(n);
	}

	int sum = 0;
	for (int i : A) {
		sum = sum + i * i;
	}
	cout << sum % 10;
}