#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long N;

	cin >> N;

	vector<long long> S(N);

	for (long long i = 0; i < N; i++) {
		cin >> S[i];
	}

	auto res = minmax_element(S.begin(), S.end());
	
	long long min = *res.first;
	long long max = *res.second;

	cout << min << " " << max;
}