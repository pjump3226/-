#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return a % b ? gcd(b, a%b) : b;
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		long long sum = 0;
		int arr[101];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		for (int j = 0; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(arr[j], arr[k]);
			}
		}
		cout << sum << '\n';
	}
	return 0;
}