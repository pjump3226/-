#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	long long sum = 0;
	int k[1000];
	for (int i = 0; i < m; i++) {
		cin >> k[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			if (i%k[j] == 0) {
				sum += i;
				break;
			}
		}
	}
	cout << sum << '\n';
	return 0;
}