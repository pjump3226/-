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
	for (int i = 1; i < n; i++) {
		int divisor = gcd(arr[0], arr[i]);
		cout << arr[0] / divisor << "/"
			<< arr[i] / divisor << '\n';
	}
	return 0;
}