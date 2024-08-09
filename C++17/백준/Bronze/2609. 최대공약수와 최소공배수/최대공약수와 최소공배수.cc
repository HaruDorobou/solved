#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) { // 최대공약수 (a > b)
	return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) { // 최대공배수 (a > b)
	return a / gcd(a, b) * b; // 나누기부터 먼저해서 큰값 처리
}

int main() {
	int A, B;
	cin >> A >> B;

	vector<int> V;
	V.push_back(A);
	V.push_back(B);

	sort(V.begin(), V.end());

	cout << gcd(A, B) << '\n' << lcm(A, B);
}