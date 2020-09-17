#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long *arr = new long long[n];
	long long count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int b, c;
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		arr[i] -= b;
		count++;
		if (arr[i] > 0) {
			if (arr[i] % c == 0) {
				count += (arr[i] / c);
			}
			else {
				count += (arr[i] / c) + 1;
			}
		}
	}
	cout << count << '\n';
	return 0;
}