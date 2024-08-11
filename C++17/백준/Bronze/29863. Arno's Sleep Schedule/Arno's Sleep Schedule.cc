#include <iostream>

using namespace std;

int main() {
	int hour, alarm;

	cin >> hour >> alarm;
	// hour 20 (23)~(0) 3
	// sleep 5 ~ 10

	int time = alarm - hour;

	if (time < 0) time += 24;
	cout << time;
}