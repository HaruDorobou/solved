#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> P; //  0  1  2  2  2  7
	vector<int> CP = { 1, 1, 2, 2, 2, 8 };
	vector<int> res;

	for (int i = 0; i < 6; i++) {
		int N;
		cin >> N;
		P.push_back(N);
	}
	
	for (int i = 0; i < 6; i++) {
		if (P[i] == CP[i]) { res.push_back(0); cout << 0 << " ";  continue; }
		else {
			res.push_back(CP[i] - P[i]);
		}

		cout << res[i] << " ";
	}
}