#include <iostream>
using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int min;
	int count = 0;
	cin >> m >> n;
	for (int i = m; i <=n; i++) {
		int val = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) val++;
		}
		if (val == 2) {
			if (count == 0) min = i;
			if (min > i) {
				min = i;
			}
			count++;
			sum += i;
		}
	}
	if (count != 0) {
		cout << sum << '\n' << min << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}