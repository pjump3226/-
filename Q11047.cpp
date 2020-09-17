#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int count = 0;
	int *coin = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		int q = k / coin[i];
		count += q;
		k -= q * coin[i];
	}
	cout << count << '\n';
	return 0;
}