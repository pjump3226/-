#include <iostream>
using namespace std;

int d(int n) {
	int result = n;
	result += (n % 10);
	while ((n / 10) > 0) {
		n /= 10;
		result += n % 10;
	}
	return result;
}

int main() {
	bool arr[10001];
	fill_n(arr, 10001, true);
	for (int i = 1; i <= 10000; i++) {
		int test = d(i);
		if (test <= 10000) {
			arr[test] = false;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i]) cout << i << '\n';
	}
	return 0;
}
