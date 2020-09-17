#include <iostream>
using namespace std;
bool arr[101];

int main() {
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int num = 0;
		for (int j = 1; j <= n; j++) {
			for (int k = j; k <= n; k += j) {
				arr[k] = !arr[k];
			}
		}
		for (int j = 1; j <= n; j++) {
			if (arr[j]) num++;
		}
		cout << num << '\n';
		for (int j = 1; j <= n; j++) {
			arr[j] = 0;
		}
	}
	return 0;
}