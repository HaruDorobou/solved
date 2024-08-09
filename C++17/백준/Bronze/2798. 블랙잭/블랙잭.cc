#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSomeCloset(vector<int>& cards, int M) {
	int N = cards.size();
	int closetSum = 0;

	// 모든 3장의 조합을 확인 (brute force)
	for (int i = 0; i < N - 2; i++) { // 3장이니까(나머지 두장 위치는 고정) 사이즈에서 2번 후퇴한 만큼만 돈다
		for (int j = i + 1; j < N - 1; j++) { 
			for (int k = j + 1; k < N; k++) {
				
				int sum = cards[i] + cards[j] + cards[k];
				
				// 합이 M을 넘지 않으면서 지금까지의 최대값보다 크면 update
				if (sum <= M && sum > closetSum) { 
					closetSum = sum;
				}

				if (sum == M) {
					return sum;
				}
			}
		}
	}

	return closetSum;
}

int main() {
	int N, M;
	cin >> N >> M;
	// 3 <= N <= 100
	// 10 <= M <= 300,000
	
	vector<int> V;

	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		V.push_back(A);
	}

	int res = findSomeCloset(V, M);

	cout << res;
}
