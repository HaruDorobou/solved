#include <iostream>

using namespace std;

int dp(int n, int k) {
	int table[11][11]; // table

	// n, k = 5 2 
	//			   j        i k  
	// i j = 0 0 / 0 <= min(0,2)->0 = 1 (or 0)
	// i j = 0 1 / 1 <= min(0,2)->0 = LOOP ESCAPE
	// i j = 1 0 / 0 <= min(1,2)->1 = 1 (or 0)
	// i j = 1 1 / 1 <= min(1,2)->1 = 1 (i==j)
	// i j = 1 2 / 2 <= min(1,2)->1 = LOOP ESCAPE
	// i j = 2 0 / 0 <= min(2,2)->2 = 1 (or 0)
	// i j = 2 1 / 1 <= min(2,2)->2 = 1 + 1
	// i j = 2 2 / 2 <= min(2,2)->2 = 1 (i==j)
	// i j = 2 3 / 3 <= min(2,2)->2 = LOOP ESCAPE
	// i j = 3 0 / 0 <= min(3,2)->2	= 1 (or 0)
	// i j = 3 1 / 1				= 1 + 2 = 3
	// i j = 3 2 / 2				= 2 + 1 = 3
	// i j = 3 3 / 3				= LOOP ESCAPE
	// i j = 4 0 / 0 <= min(4,2)->2 = 1 (or 0)
	// i j = 4 1 / 1				= 1 + 3 = 4
	// i j = 4 2 / 2				= 3 + 3 = 6
	// i j = 4 3 /					= LOOP ESCAPE
	// i j = 5 0 /					= 1 (or 0)
	// i j = 5 1 / 1				= 1 + 4 = 5
	// i j = 5 2 / 2				= 4 + 6 = 10 GOTEMM
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= min(i, k); j++) {
			if (i == j || j == 0) { // 1 
				table[i][j] = 1;
			}
			else { // (i, j) = (i-1, j-1) + (i-1, j)
				table[i][j] = table[i - 1][j - 1] + table[i - 1][j];
			}
		}
	} 
	
	return table[n][k];
}

int main() {
	// DP로 이항계수 구하기
	int a, b; // 1 <= a <= 10 ,  0 <= b <= a 
	cin >> a >> b;

	cout << dp(a, b);

}