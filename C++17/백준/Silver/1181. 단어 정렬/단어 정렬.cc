#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s;
	
	for (int i = 0; i < n; i++) {
		string e;

		cin >> e;
		s.push_back(e);
	}
	sort(s.begin(), s.end(), [](const string& a, const string& b) { return a.size() == b.size() ? a < b : a.size() < b.size(); });
	s.erase(unique(s.begin(), s.end()), s.end());

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
}