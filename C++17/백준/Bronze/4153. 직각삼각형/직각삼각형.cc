#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	
	vector<int> V;

	while (1) {
		int a, b, c;
		cin >> a >> b >> c;

		V.push_back(a);
		V.push_back(b);
		V.push_back(c);

		sort(V.begin(), V.end());

		if (a == 0 && b == 0 && c == 0) break;
		
		if (pow(V[0], 2) + pow(V[1], 2) == pow(V[2], 2)) { cout << "right" << '\n'; V.clear(); }
		else { cout << "wrong" << '\n'; V.clear(); }
	}
}

