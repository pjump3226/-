#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	return a % b ? gcd(b, a%b) : b;
}

int main() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int result = arr[1] - arr[0];
	for (int i = 2; i < n; i++) {
		result = gcd(result, arr[i] - arr[i - 1]);
	}
	for (int i = 2; i <= result / 2; i++) {
		if (result%i == 0) cout << i << " ";
	}
	cout << result << '\n';
	return 0;
}