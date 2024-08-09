#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {    
	vector<int> S(31, 0); 
    vector<int> I;
	
	for (int i = 1; i <= 28; i++) {
		int n;
		cin >> n;
		S[n] = n;
	}

	for ( int i = 1; i <= 30; i++ ) {
		if (S[i] == 0) {
            I.push_back(i);
		}
	}

	sort(I.begin(), I.end());

    cout << I[0] << '\n' << I[1];
}