#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int max = 0;
	int a, b;
	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		sum = sum - a + b;
		if (sum > max) {
			max = sum;
		}
	}
	cout << max << '\n';
	return 0;
}

